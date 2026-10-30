#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int n, int arr[]) {
    for (int i = n-1; i>=1 ;i--) {
        for (int j  = 0; j <  i; j++ ) {
            if (arr[j] > arr [j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
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
    bubble_sort (n,arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        
    }
    return 0;
}