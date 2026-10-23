
#include <bits/stdc++.h>
using namespace std;

// List also has operations like insert(), erase(),
// push_back(), push_front().

// Indexing is not available in list.

int main() {
    list<int> ls = {10, 20, 30, 40};

    // cout << ls[0]; // Cannot access list elements using indexing

    ls.push_front(5); // Add element at the 1st position

    // Traversing list after push_front
    for (auto it = ls.begin(); it != ls.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    ls.pop_front(); // Remove element from the 1st position

    // Traversing list after pop_front
    for (auto it = ls.begin(); it != ls.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    ls.erase(ls.begin()); //erasing 1st element 

    auto it = ls.begin(); //declare iterator
    advance (it , 2); //move iterator 2 position forward

    ls.insert(it , 50);// inserted 50 after 2nd position
    
    for (auto it = ls.begin(); it != ls.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}

