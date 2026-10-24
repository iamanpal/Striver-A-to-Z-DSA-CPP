#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set <int> s; //delcared unordered_set
    s.insert(10);
    s.insert(9);
    s.insert(5);
    s.insert(10);

    auto it  = s.find(10);// find element in unordered_set
    cout << *it << endl;

    s.erase(s.find(10));//erasing last element
 
    //traversing unordered_set
    for (auto it = s.begin(); it !=s.end(); it++)  {
        cout << *it <<  " ";
    }

    return 0;
}