#include <iostream>
using namespace std;
class Employee
{
  private:
   int emp_id;
   string name;
   string role;
   string shift_type;
   int salary;
  public:
  Employee(int emp_id=0,string name="", string role="",string shift_type="",int salary=0)
  {
     setEmpid(emp_id);
     setName(name);
     setRole(role);
     setShiftType(shift_type);
     setSalary(salary);
  }
  void setEmpid(int emp_id)
  {
        if(emp_id>=0)
          this->emp_id=emp_id;
        else
           this->emp_id=0;
  }
  void setName(string name)
  {
        this->name=name;
  }
  void setRole(string role)
  {
        this->role=role;
  }
  void setShiftType(string shift_type)
  {
       this->shift_type=shift_type;
  }
  void setSalary(int salary)
  {
      this->salary=salary;
  }
  int getEmpid()
  {
     return emp_id;
  }
  void display_empDetails(string shift_type)
  {
    if(this->shift_type=="part time")
    {
       cout<<"Employee name is "<<name
       <<"\nEmp id is "<<emp_id
       <<"\nDesignation is "<<role
       <<"\nShift type is  "<<shift_type
       <<"\nSalary is  "<<salary;

    }
  }
};
class FulltimeEmployee:public Employee
{
     
};
class PartTimeEmployee:public Employee
{
   public:
   PartTimeEmployee(int emp_id, string name, string role, string shift_type, int salary)
        : Employee(emp_id, name, role, shift_type, salary) // call base class constructor
    {
    }
};
int main() {
    //Your Code goes here!
    //FulltimeEmployee f;
    
    // p.setEmpid();
    //  p.setName();
    //  p.setRole();
    //  p.setShiftType();
    //  p.setSalary();
    PartTimeEmployee p(101,"dhana","software engineer","part time",50000);
    p.display_empDetails("part time");
   
    return 0;
}