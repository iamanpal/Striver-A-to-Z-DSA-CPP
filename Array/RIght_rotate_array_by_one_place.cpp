// # OPTIMAL APPROACH
// TC = O(N)
// SPACE COMPLEXITY - FOR EXTRA SPACE = O(1) , FOR TO SOLVE THIS PROBLEM AND  USING THE GIVEN ARRAY SC IS O(N)

#include <bits/stdc++.h>
using namespace std;

void rotate_array(int n,  int arr[]) {
    if (n <= 1) { //EDGE  CASE IF ARRAY SIZE IS 1.
        return;
    }
    int temp = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
         arr[i+1] = arr[i] ;
    }
    arr[0] = temp;
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

    rotate_array(n,arr);
    cout << "Array after rotate one place : ";
    for (int i = 0; i < n; i++) {
        cout <<  arr[i] << " ";
    }

    return 0;
}