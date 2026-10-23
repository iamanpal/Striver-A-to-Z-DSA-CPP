
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v ={1,2,3,4,5};

    // traversing vector v by indexing
     for (int i = 0; i < v.size() ; i++) {
        cout << v [i] << " " ;
    }

    cout << endl;

    v.push_back(6);// add element in v vector
    v.emplace_back(7);// add element in v vector
    

    // traversing vector v by iterator
    for (vector <int> ::iterator it = v.begin(); it != v.end() ; it++ ){
        cout << *it << " ";
    }

    cout << endl;
 
    cout << v.front() << endl; // return front value of vector
    cout << v.back() << endl; // return last value of vector

    cout << v.empty() << endl; // return boolean value


    vector <int> v2(v);  // copy v vector in v2 vector
    cout << v2.size() << endl;


    // traversing vector using auto iterator
    for (auto it = v2.begin(); it != v2.end() ; it++ ){
        cout << *it << " ";
    }
     cout << endl;

    // inserting values in vector
    v2.insert(v2.begin(),10);
    v2.insert(v2.begin()+3,20);


    // erasing values in vector
    v2.erase (v2.end()-1);

    // traversing vector v2
    for (auto it = v2.begin(); it != v2.end() ; it++ ){
        cout << *it << " ";
    }
        return 0;
}
