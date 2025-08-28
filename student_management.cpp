#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
public:
    int id;
    string name;
    int age;
    string course;

    void input() {
        cout << "\nEnter Student ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);
    }

    void display() const {
        cout << left << setw(10) << id
             << setw(20) << name
             << setw(10) << age
             << setw(15) << course << endl;
    }

    void save(ofstream &out) const {
        out << id << "," << name << "," << age << "," << course << "\n";
    }

    bool load(const string &line) {
        if (line.empty()) return false;
        size_t pos1 = line.find(',');
        size_t pos2 = line.find(',', pos1 + 1);
        size_t pos3 = line.find(',', pos2 + 1);

        if (pos1 == string::npos || pos2 == string::npos || pos3 == string::npos)
            return false;

        id = stoi(line.substr(0, pos1));
        name = line.substr(pos1 + 1, pos2 - pos1 - 1);
        age = stoi(line.substr(pos2 + 1, pos3 - pos2 - 1));
        course = line.substr(pos3 + 1);
        return true;
    }
};

void addStudent() {
    Student s;
    s.input();
    ofstream fout("students.txt", ios::app);
    s.save(fout);
    fout.close();
    cout << "\nStudent record added successfully!\n";
}

void viewStudents() {
    ifstream fin("students.txt");
    if (!fin) {
        cout << "No records found.\n";
        return;
    }

    cout << "\n--- Student Records ---\n";
    cout << left << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(10) << "Age"
         << setw(15) << "Course" << endl;
    cout << "----------------------------------------------------\n";

    string line;
    Student s;
    while (getline(fin, line)) {
        if (s.load(line))
            s.display();
    }
    fin.close();
}

int main() {
    int choice;
    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
