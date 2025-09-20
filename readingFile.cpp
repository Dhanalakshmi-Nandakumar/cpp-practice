#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //Reading data from file
    ifstream fp;
    fp.open("myfile.txt");
    if(!fp) //check whether file exist else will throw error
    {
        cout<<"file did not exist"; 
        return 1;
    }
    else
    {
        cout<<"file exist & file is open \n";
    }
    string name;
    int age;
    fp>>name;
    fp>>age;
    if(fp.fail())
    {
        cout<<"data is not in correct format to read";
    }
    else
    {
          cout<<name<<"  "<<age;
    }
   //check eof b4 closing
    if(fp.eof())
    {
        cout<<"\nprogram reached end of file..!";
    }
    fp.close();


    return 0;
}