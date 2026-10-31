// # BRUTE-FORCE APPROACH
// TC= 0(NLOGN)  because used sort function .
// sc = o(1)


// #include <bits/stdc++.h>
// using namespace std; 
// int largest_element(int n,int arr[]){
//     sort(arr,arr+n);  
//     int largest = arr[n-1];
//     return largest;

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


//     cout << "Largest element is : " << largest_element(n,arr);
   

//     return 0;
// }

// # OPTIMAL APPROACH
// TIME COMPLEXITY = O(N) 
// SPACE COMPLEXITY = O(1)

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

    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest){
            largest =arr[i];
        }
    }


    cout << "Largest element is : " << largest;

    return 0;
}
