#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //writing data into file
    ofstream fp("myfile.txt",ios::trunc);
    fp<<"hello "<<endl;
    fp<<24<<endl;
    fp.close();
    ofstream fp("myfile.txt");//by default truncate
    fp.close();

    return 0;
}