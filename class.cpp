#include <iostream>
using namespace std;

class Employee
{
   // public:
     static int emp_id;
    string name;
    string designation;
    int salary;
    string timings[5]={"9am","5pm"};
    void incrementSalary(int increment)
    {
        salary+=increment;
    }
};
 int Employee::emp_id=90;

int main() {
    //Your Code goes here!
    Employee emp;
    cout<<sizeof(emp);
    cout<<Employee::emp_id;
    return 0;
}