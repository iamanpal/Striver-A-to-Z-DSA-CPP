
#include <bits/stdc++.h>
using namespace std;

int main() {
queue <int> q;//declared queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.front() += 5;//adding 5 in 1 element 
    
    //traversing queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}
