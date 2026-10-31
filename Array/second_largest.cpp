// // BRUTE-FORCE APPROACH
// // TC = O(N log N) + O(N) = O(N log N)
// // SC = O(LOGN)

// #include <bits/stdc++.h>
// using namespace std;

// int second_largest(int n, int arr[]) {
//     sort(arr,arr+n);
//     int  largest = arr[n-1];
//     int second_largest;
//     for(int i = n-2; i >= 0; i-- ){
//         if (arr[i] != largest){
//             second_largest = arr[i];
//             break;  
//         }
//     }
//     return second_largest;
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

//     cout << "Second  largest element  is  " << second_largest(n,arr);

//     return 0;
// }

// ------------------------------------------------------------

// # BETTER APPROACH 
//TC = O(N) + O(N) = O(2N)
//SC = O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int second_largest(int n, int arr[]){
//     int largest = arr[0];
//     for( int i = 1; i < n ; i ++ ){
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     int s_largest = -1;
//     for (int i = 0 ; i < n ; i ++) {
//         if (arr[i] > s_largest && arr[i] != largest) {
//             s_largest = arr[i];
//         }
//     }

//     return s_largest;
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

//     cout << "Second  largest is ;" << second_largest(n,arr);


//     return 0;
// }

// ----------------------------------------------------------------

// # OPTIMAL APPROACH 
//TC = O(N) 
//SC = O(1)

#include <bits/stdc++.h>
using namespace std;
int second_largest(int n, int arr[]){
    int largest = arr[0];
    int s_largest = -1;
    for (int i = 1 ; i < n ; i ++) {
        if (arr[i] > largest) {
           s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > s_largest) {
          s_largest  = arr[i];
        }
    }

    return s_largest;
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

    cout << "Second  largest is ;" << second_largest(n,arr);


    return 0;
}