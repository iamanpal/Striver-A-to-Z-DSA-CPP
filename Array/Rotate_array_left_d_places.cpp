// # BRUTE FORCE APPROACH
// Time Complexity: O(d)+O(n-d)+O(d)
// Auxiliary Space: O(d)

// #include <bits/stdc++.h>
// using namespace std;

// void  rotate_array(int n, int arr[], int d ,int temp[]) {

//     //edge case if n = 0
//      if (n == 0) { 
//         return;
//     } 

//     if (d >= n) {
//         d = d % n;
//     }

//     for (int i = 0; i < d; i++) { //O(d)
//         temp [i] = arr [i];
//     }  

//     for (int i = d; i < n; i++) {//O(n-d)
//         arr [i - d] = arr [i];
//     } 

//     for (int i = n-d; i < n; i++) { //O(d)
//         arr [i] = temp [i-(n-d)  ];
//     }

 
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

//     int d;
//     cout << "Enter the number for rotation : ";
//     cin >> d;

//     int temp[d];

//     rotate_array(n,arr,d,temp);
 
//       for (int i = 0; i < n ; i++) {
//         cout << arr[i];
//     }

//     return 0;
// }

//OPTIMAL APPROACH
// TC

#include <bits/stdc++.h>
using namespace std;

void  rotate_array(int n, int arr[], int d) {
    if(n == 0) {
        return;
    }

    d = d % n;

    reverse(arr, arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

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

    int d;
    cout << "Enter the number for rotation : ";
    cin >> d;


    rotate_array(n,arr,d);
 
    for (int i = 0; i < n ; i++) {
        cout << arr[i];
    }

    return 0;
}