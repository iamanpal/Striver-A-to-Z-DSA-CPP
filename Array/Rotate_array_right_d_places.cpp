// # BRUTE FORCE APPROACH
// Time Complexity: O(d)+O(n-d)+O(d)
// Auxiliary Space: O(d)

#include <bits/stdc++.h>
using namespace std;

void  rotate_array(int n, int arr[], int d) {

    //edge case if n = 0
     if (n == 0) { 
        return;
    } 

     // Handle d greater than or equal to n
        d = d % n;
 
    int temp[d]; //Temporary array to store last d elements
   
    int  j = 0;
    for (int i = n-d; i < n; i++) { // Store last d elements in temp - O(d)
        temp [j] = arr [i];
        j++;
    }  

    for (int i = n-d-1; i >=0; i--) { // Right shift remaining elements - O(n-d)
        arr [i + d] = arr [i];
    } 

    for (int i = 0; i < d; i++) { // Copy temp elements to the beginning - O(d)
        arr [i] = temp [i];
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

    int d;
    cout << "Enter the number for rotation : ";
    cin >> d;

    rotate_array(n,arr,d);
 
      for (int i = 0; i < n ; i++) {
        cout << arr[i];
    }

    return 0;
}

// # OPTIMAL APPROACH
// TC = O(n)
// SC = O(1) — Auxiliary Space

// #include <bits/stdc++.h>
// using namespace std;

// void  rotate_array(int n, int arr[], int d) {
//     if(n == 0) {
//         return;
//     }

//         if (d == 0) {
//     return;
// }

//     d = d % n;

//     reverse(arr, arr+n-d);
//     reverse(arr+n-d,arr+n);
//     reverse(arr,arr+n);

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


//     rotate_array(n,arr,d);
 
//     for (int i = 0; i < n ; i++) {
//         cout << arr[i];
//     }

//     return 0;
// }