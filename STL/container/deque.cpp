
#include <bits/stdc++.h>
using namespace std;

// Deque also has operations like push_back(), push_front(),
// pop_back(), pop_front(), insert() and erase().

// Indexing is present in deque.

int main() {
    deque<int> dq = {10, 20, 30, 40};

    dq.push_front(5); // Add element at the 1st position
    dq.push_back(50); // Add element at the last position

    // Traversing deque after push_front and push_back
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    dq.pop_front(); // Remove element from the 1st position
    dq.pop_back(); // Remove element from the last position

    // Traversing deque after pop_front and pop_back
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    cout << dq[2] << endl; // Accessing element using indexing

    dq.insert(dq.begin() + 2, 50);

    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    dq.erase(dq.begin()); // Erase the 1st element
    dq.erase(dq.end()-1); //Erase the  last element

    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    cout << "starting element: " << dq.front() << endl;
    cout << "last element: " << dq.back() << endl;
    cout << "Size is: " << dq.size() << endl;

    return 0;
}
