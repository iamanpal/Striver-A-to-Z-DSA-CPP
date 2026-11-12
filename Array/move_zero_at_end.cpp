// # BRUTE-FORCE APPROACH
// TC= O(N) + O(X)+ O(N-X) = O(N)
// sc = O(X) ,WORST CASE = O(N)


// #include <bits/stdc++.h>
// using namespace std;
// void move_zero(int  n, int arr[] ,vector<int> &temp){

//     for (int i = 0; i < n; i++){
//         if (arr[i] != 0) {
//             temp.push_back(arr[i]);//O(N)
//         }
//     }

//     for (int i = 0; i < temp.size(); i++){
//         arr[i] = temp[i]; //O(X)

//     }

//     for (int i = temp.size(); i < n; i++){ 
//         arr[i] = 0;//O(N-X)
//     }

// }

// int main() {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;

//     int arr[n];

//     vector<int>temp;

//     for (int i = 0; i < n; i++) {
//         cout << "Enter " << i << " Element : ";
//         cin >> arr[i];
//     }

//     move_zero(n,arr,temp);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] <<  " ";
//     }



//     return 0;
// }

// # OPTIMAL APPROACH
// TC = O(N)
// Auxiliary SC = O(1)

#include <bits/stdc++.h>
using namespace std;
void move_zero(int n, int arr[]){
    int j = -1;
    for (int i = 0 ;i < n; i++) {
        if (arr[i] == 0){
            j = i;
            break;  
        }
    }
    
    
    if (j == -1) {
        return;
    }
    

    for (int i = j+1 ;i<  n; i++){
        if (arr[i] != 0) {
            swap(arr[i],arr[j]);
            j++;
        }
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

    move_zero(n,arr);

        for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}