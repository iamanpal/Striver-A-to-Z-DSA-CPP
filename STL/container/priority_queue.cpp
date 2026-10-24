#include <bits/stdc++.h>
using namespace std;

int main() {
    //Max Heap
    priority_queue<int> pq;

    // Inserting elements
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(50);
    pq.emplace(40);

    // Access top element
    cout << "top : " << pq.top() << endl;

    // Size of priority queue
    cout <<"size :" << pq.size() << endl;

    // Print all elements
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;


    cout << "--Min Heap--" << endl;
    //Min Heap
    priority_queue<int ,vector <int>,greater <int>> pq1;
    pq1.push(80);
    pq1.push(30);
    pq1.push(40);
    pq1.push(50);
    pq1.emplace(60);

    // Access top element
    cout << "top : " << pq1.top() << endl;

    // Size of priority queue
    cout <<"size :" << pq1.size() << endl;

        // Print all elements
    while (!pq1.empty()) {
        cout << pq1.top() << " ";
        pq1.pop();
    } 
    cout << endl;

    return 0;
}