
#include <bits/stdc++.h>
using namespace std;

int main() {
    map <int , string> mp;//declared key as integer and  value as string here
    // map <int ,pair <int , string>> mp1; //declared map key contains 1 value and string contains  2 value 
    // map <pair <int , string>,int> mp1; //declared map key contains 2 value and string contains  1 value 
    mp.insert({1,"Aman"});
    mp.insert({1,"Rohan"});
    mp.insert({5,"Hritik"});
    mp.emplace(3,"Isha");
    
    //traversed map by using iterator 
    //key will  follow sorted order after traverse bcz key in map follows sorted order 
    //if key is duplicate then it would ignore right after first same value 
    for (auto it : mp) {
        cout << it.first << " " << it.second ;
        cout << endl;
    }


    cout << "size is :" << mp.size();

    cout << endl;

    mp.erase(mp.find(5));//erase key 5 if it exists

    cout << endl;

    for (auto it : mp) {
        cout << it.first << " " << it.second ;
        cout << endl;
    }

    return 0;
}
