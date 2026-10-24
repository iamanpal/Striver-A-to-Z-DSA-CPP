#include <bits/stdc++.h>
using namespace std;

int main() {
   set <int> s;//declaration of set
    s.insert(4);
    s.insert(1);
    s.insert(9);
    s.insert(3);
    s.emplace(4);

    cout << "count is :" << s.count(4) << endl; // return only 1 and 0

    auto it = s.find(4) ;// if element not present in set so it would return last element
    cout << *it ; 
    cout << endl;

    s.erase(4);// erased 4 from  set
    
    //traversing set
    for (auto it = s.begin(); it!= s.end(); it ++){
        cout << *it << " ";
    }

    return 0;
}