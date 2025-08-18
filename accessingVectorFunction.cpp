#include <bits/stdc++.h>
using namespace std;
void printVector(vector <int> arr)
{
    for(auto it: arr )
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main() {
    vector <int> vec {10,20,30};
    auto it=vec.begin();
    //inserting 1 elemnt 
     vec.insert(vec.begin()+2,1);
     //inserting multiple same elemnt 
     vec.insert(vec.begin()+2,4,7);
    vec.insert(vec.begin()+2,1);
    //Your Code goes here!
    // vector <int> vec3={10,20,30,49,50};
    // vector <int> vec2{10};
    // vector <int> vec(10);
    //  vector<pair<int,int>> v1{{1,2},{3,4},{5,6}};
    //  cout<<v1[1].second<<endl;
   
    //getting user input
    // vector <int> userInput;
    // cout<<"Enter size";
    // int size;
    // cout<<"enter size ";
    // cin>>size;
    // cout<<endl;
    // for(int i=0;i<size;i++)
    // {
    //   int num;
    //   cin>>num;
    //   cout<<endl;
    //   userInput.push_back(num);
    // }
     //userInput.pop_back();
     
     

    //   cout<<"First element "<<userInput.front()<<endl;
    //   printf("Calling the function to access element");
    printVector(vec);
     //accessing first element
     //vector <int> :: iterator it=userInput.begin();
     //vector <int> :: iterator it=userInput.end();
     //accessing last element
    // vector <int> :: iterator it=userInput.end()-1;
     // error -> trying to print address cout<<"Accesing the first element using iterator "<< it;
    // cout<<"Accesing the first element using iterator "<< *it;
     //printing the value in vector using iterator
    // vector <int>:: iterator it=userInput.begin();
   
    // for( auto it=userInput.begin();it!=userInput.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    //using foreach loop we can access print element in the verctor easily
    //Drawback : cannot access indx
// for(auto it: userInput)
// {
//     cout<<"printing all with foreach loop"<<endl;
//     cout<<it<<endl;
// }

//inserting elelment in the vector only using iterator

    
    return 0;
}