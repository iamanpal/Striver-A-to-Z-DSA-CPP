
#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,int> p={10,2}; // initializing pair
    cout<<p.first << " " << p.second << endl; // accessing first and second element

    pair<int,pair<int,int>> p2 = {10,{20,30}}; // initializing nested pair with 3 values
    cout << p2.second.second << endl; // accessing nested pair

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}}; // initializing array of pairs
    cout << arr[1].first << " " << arr[0].second; // accessing array elements

    return 0;
}
