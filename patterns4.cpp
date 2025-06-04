#include <iostream>
using namespace std;
void patternPrinting(int num)
{
   for(int i=0;i<num;i++)
   {
      for(int j=0;j<num;j++)
      {
        cout<<"|< ";
      }
      cout<<endl;
   }
}

int main() {
    cout<<"how many times you want to run the loop ? ";
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
          int n;
          cin>>n;
          patternPrinting(n);

    }
   
    return 0;
}