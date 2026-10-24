
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <int> s; //declare stack named  s
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s.top()  << endl; // element at the top
   
    s.pop();// remove element at the top
    cout << "size of s stack now after pop operation :" << s.size()  << endl;
    cout << s.top() <<  endl;

    stack <int> s1; //declare stack named  s1
    s1.push(40);
    s1.push(30);
    s1.push(10);
    s1.emplace(20);
    s1.push(30);
    
    s1.swap(s);

    cout << "size of s stack after swap :" << s.size() << endl;
    cout <<  "size of s1 stack after swap :" << s1.size() << endl;
    return 0;
}
