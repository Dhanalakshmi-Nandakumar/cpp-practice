#include <bits/stdc++.h>
using namespace std;

int main() {
  string name="Dhanalakshmi";
  int age=22;
  string role="softwareDeveloper";
  int salary=20000; 
  ofstream fp("myinfo.txt",ios::app); //open file and append the data
  //fstream fp("myInfo.txt",ios::trunc|ios::out); //if using fsteam you must specify out/in to perform
  fp<<name<<"   "<<age<<"   "<<role<<"   "<<salary;
  fp.close();

    return 0;
}