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