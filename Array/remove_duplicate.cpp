// # BRUTE-FORCE APPROACH
// TC= 0(N)  
// sc = o(N)

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter " << i << " Element : ";
//         cin >> arr[i];
//     }

//     set <int> s;
//     for (int i = 0; i < n; i++ ) {
//         s.insert(arr[i]);
//     }

//     cout << "After removing duplicate ";
//     for(auto it : s) {
//         cout << it << " ";
//     }

//     return 0;
// }


// OPTIMAL APPROACH ( By using Two Pointers)
// TC = O(N)
// SC = O(1)

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << " Element : ";
        cin >> arr[i];
    }

    int cnt = 0;
    for (int j = 1; j < n; j++ ) {
        if (arr[j] != arr[cnt]){
            arr[cnt+1] = arr[j];
            cnt++;
        }
    }

    for (int i =0 ;i <= cnt; i++ ) {
        cout << arr[i] << " ";
    }

    return 0;
}