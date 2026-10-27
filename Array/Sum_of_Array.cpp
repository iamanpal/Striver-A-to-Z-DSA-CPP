#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i <<  " Element : ";
        cin >> arr[i];
    }
    int  sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    cout << "Sum  of array Element  is : " <<sum;
    return 0;
}

//asdhoooraaaaaaaaaaaaaaaaaaaaaaaa
