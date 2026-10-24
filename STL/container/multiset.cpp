#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms; // declared  multiset

    ms.insert(4);
    ms.insert(1);
    ms.insert(9);
    ms.insert(3);
    ms.emplace(4); // duplicate allowed

    // count
    cout << "count is: " << ms.count(4) << endl; //counting the element in multiset

    // erase only one occurrence because ms.find return iterator
    ms.erase(ms.find(4));

    // traversing multiset
    for (auto it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}