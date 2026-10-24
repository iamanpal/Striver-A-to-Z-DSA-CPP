#include <bits/stdc++.h>
using namespace std;

int main() {
    //initailized array of size 7
    int arr[] = {1,2,3,4,10,9};
    cout << *max_element(arr,arr + 6);//gives maximum element
    cout <<endl;
    cout << *min_element(arr, arr + 6);//gives minimum element.
    return 0;
}