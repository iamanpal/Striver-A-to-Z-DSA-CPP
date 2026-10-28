#include <bits/stdc++.h>
using namespace std;
void selection_sort(int n, int arr[]){
    for (int i = 0; i < n-1; i++) {
        int mini = i;
        for (int j = i; j <= n-1; j++) {
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        swap (arr[mini],arr[i]);
    }
}

int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i <<  " Element : ";
        cin >> arr[i];
    }
    selection_sort(n,arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        
    }

    return 0;
}