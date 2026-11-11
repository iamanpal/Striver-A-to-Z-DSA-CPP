// BRUTE FORCE APPROACH
// TC = O(N * N)
// Auxiliary SC = O(1)
// Checking each number from 1 to N in the array.

// #include <bits/stdc++.h>
// using namespace std;
// int missing_number(int n, int arr[])
// {

//     for (int i = 1; i <= n; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cout << "Enter size of  array:";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int missing = missing_number(n, arr);
//     cout << "Missed number is :" << missing;
//     return 0;
// }

// BETTER APPROACH (Hashing)
// TC = O(N) + O(N) = O(N)
// Auxiliary SC = O(N) for hash array

//

// #include <bits/stdc++.h>
// using namespace std;

// int missing_number(int a[], int n){
//     int hash[n+1] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[a[i]]++;
//     }

//         for (int i = 1; i <= n; i++) {
//         if(hash[i] != 1){
//             return i;
//         }

//     }
//     return -1;

// }
// int main() {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter " << i << " Element : ";
//         cin >> a[i];
//     }

//     int result = missing_number(a,n);
//         if(result == -1){
//             cout << "There is no missing number in array .";
//         }
//     else{
//     cout << "missing number is : " << result;

//     }

//     return 0;
// }

// OPTIMAL APPROACH (By using sum formula)
// TC = O(N)
// Auxiliary SC = O(1)

// #include <bits/stdc++.h>
// using namespace std;

// int missing_number(int  n,  int arr[]){
//  int sum = n*(n+1)/2;
//     int  array_sum = 0;
//     for (int i = 0; i < n; i++) {
//         array_sum += arr[i];
//     }
//     int  result = sum - array_sum ;

//     return  result;
    
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



//     cout << "missing  number is  : " << missing_number(n,arr);

//     return 0;
// }

// OPTIMAL APPROACH (XOR)
// TC = O(N) + O(N) = O(N)
// Auxiliary SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int missing_number(int n, int arr[]) {
    int XOR1 = 0;
    int XOR2 = 0;
    int XOR = 0;

    for (int i = 1; i <= n; i++) {
        XOR1 = XOR1 ^ i;
    }

    for (int i = 0; i < n - 1; i++) {
        XOR2 = XOR2 ^ arr[i];
    }

    XOR = XOR1 ^ XOR2;

    return XOR;
}

int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n - 1; i++) {
        cout << "Enter " << i << " Element : ";
        cin >> arr[i];
    }

    cout << "Missing number is : " << missing_number(n, arr);

    return 0;
}