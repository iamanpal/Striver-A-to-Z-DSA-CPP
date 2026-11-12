// BRUTE FORCE APPROACH (Hashing)
// TC = O(N + MAX)
// SC = O(MAX)
// Finding the frequency of each element using a hash array.

// #include <bits/stdc++.h>
// using namespace std;

// int appear_once(int n, int arr[]) {
//     int maxi = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > maxi){
//             maxi = arr[i];
//         }
//     }  
//     int hash[maxi+1] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]]++;
//     }
//     for (int i = 0; i <= maxi; i++) {
//         if(hash[i] == 1){
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter " << i << " Element : ";
//         cin >> arr[i];
//     }

//     cout  << "number that appear's ones " << appear_once(n,arr);
//     return 0;
// }


// BETTER APPROACH (Using Unordered Map)
// TC = O(N) Average Case
// SC = O(N)

// NOTE:
// Use map when input is critical because its TC is always O(N log N).
// unordered_map is faster on average but its worst case TC is O(N^2).
// map stores elements in sorted order.

// #include <bits/stdc++.h>
// using namespace std;

// int number_appears(int n, int arr[]){
//     unordered_map<long,int> mpp ;
//     for (int i = 0; i < n; i++) {
//         mpp[arr[i]]++;
//     }
//     for (auto it: mpp ) {
//         if(it.second == 1) {
//             return it.first;
//         }
//     }  
//     return -1;
// }

// int main() {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter " << i << " Element : ";
//         cin >> arr[i];
//     }

//     cout << "number that appears once is  : " << number_appears(n,arr);

//     return 0;
// }


// OPTIMAL APPROACH (Using XOR)
// TC = O(N)
// SC = O(1)
// XOR of two same numbers is always 0
#include <bits/stdc++.h>
using namespace std;

int appear_number (int  n, int arr[]) {
    int  XOR = 0;
    for (int i = 0; i < n; i++) {
        XOR = XOR ^ arr[i];
    } 
    return XOR;

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


    cout << "number that appears once is  : " <<appear_number(n,arr);
    return 0;
}