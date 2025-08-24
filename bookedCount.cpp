#include <bits/stdc++.h>
using namespace std;
//key points
// Function parameter const → protects the whole vector from being modified.

// Loop variable const → protects the individual elements from being modified while iterating.
int sizeOfBookedRooms(const vector <string> &logs)//pass by reference
{
     unordered_set <string> booked;  //it did not have duplicates but unordered
    
    for(const string& entry :logs) //make sure u can't modify the original vector
    {
     
       char op=entry[0];
       //string room=entry.substr(1,2);//it only works for 2letter
       string room=entry.substr(1);
       if(op=='+')
       {
        booked.insert(room);
       }
       else{
        booked.erase(room);
       }
       
    }
    return booked.size();
    
}
 int main()
 {
    vector <string> logs{"+1A", "+3E", "-1A", "+4F", "+1A", "-3E","+9o","-9o"};
    cout<<"Number of booked rooms today "<<sizeOfBookedRooms(logs);
    return 0;
 }

// #include <bits/stdc++.h>
// using namespace std;

// int mostBookedRooms(const vector<string>& logs) {
//     unordered_set<string> booked;
//     for (const string& entry : logs) {
//         char op = entry[0];                  // '+' or '-'
//         string room = entry.substr(1);       // e.g. "1A"
//         if (op == '+') {
//             booked.insert(room);
//         } else {
//             booked.erase(room);
//         }
//     }
//     return booked.size();
// }

// int main() {
//     vector<string> logs = {"+1A", "+3E", "-1A", "+4F", "+1A", "-3E"};
//     cout << "Rooms booked now: " << mostBookedRooms(logs) << endl;
//     return 0;
// }
