#include <bits/stdc++.h>
using namespace std;


bool check_sorted(int n,  int  arr[]) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] <= arr[i+1]){
        } 
        else return false;
    }
    return true;
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
    int result = check_sorted(n,arr);

    if(result == 0){
        cout << "Array is not sorted .";
    }
    else cout << "Array is sorted ";
    

    return 0;

}