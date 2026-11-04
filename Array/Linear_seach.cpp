// LINEAR SEARCH
// TC = O(N) 
// Best Case = O(1) ,if element found at the first index.
// Worst Case = O(N) ,if element is at the last index or not present.
// Auxiliary SC = O(1)

#include <bits/stdc++.h>
using namespace std;
int linear_search(int n, int arr[],int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << " Element : ";
        cin >> arr[i];
    }

    int x;
    cout << "Enter number which you need to find . ";
    cin >> x;

    int  result = linear_search(n,arr,x);
    if(result == -1){
        cout << "Element is not present . ";
    }
    else cout << "Element is present , Index of  that number is " << result;

    return 0;
}