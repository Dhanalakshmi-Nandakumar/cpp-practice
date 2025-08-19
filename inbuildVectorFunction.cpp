#include <bits\stdc++.h>

using namespace std;

int main() {
    //Your Code goes here!
    // Add elements
    vector <int> vec1{10,20,30,40,50};
vec1.push_back(10);     // Add at end
vec1.insert(vec1.begin() + 1, 20);  // Insert at index 1

// Remove elements
vec1.pop_back();        // Remove last
vec1.erase(vec1.begin());  // Remove first

// Size management
vec1.resize(50);        // Change size
vec1.shrink_to_fit();   // Reduce capacity

// Information
bool empty = vec1.empty();
cout<<empty;
size_t size = vec1.size();
cout<<vec1.size();
size_t capacity = vec1.capacity();
cout<<capacity;

    return 0;
}