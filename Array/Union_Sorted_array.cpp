// // Online C++ compiler (editor)
// // Write and run C++ online using this editor.
// #include <bits/stdc++.h>
// using namespace std;

// void union_Array(int n1, int n2, int a[], int b[], set<int> &s)
// {

//     for (int i = 0; i < n1; i++)
//     {
//         s.insert(a[i]);
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         s.insert(b[i]);
//     }
// }
// int main()
// {
//     int n1;
//     cout << "Enter size of array 1 : ";
//     cin >> n1;

//     int a[n1];

//     for (int i = 0; i < n1; i++)
//     {
//         cout << "Enter " << i << " Element : ";
//         cin >> a[i];
//     }

//     int n2;
//     cout << "Enter size of array 2 : ";
//     cin >> n2;

//     int b[n2];

//     for (int i = 0; i < n2; i++)
//     {
//         cout << "Enter " << i << " Element : ";
//         cin >> b[i];
//     }

//     set<int> s;

//     union_Array(n1, n2, a, b, s);
//     for (auto it : s)
//     {
//         cout << it << " ";
//     }

//     return 0;
// }


// OPTIMAL APPROACH (Two Pointers)
// TC = O(N1 + N2)
// Auxiliary SC = O(N1 + N2) for storing the union in vector
// Precondition =  Both arrays must be sorted in ascending order.

#include <bits/stdc++.h>
using namespace std;

void union_Array(int n1,int n2,int a[],int b[],vector<int> &unionaarr){
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2){
        if (a[i] <= b[j]) {
            if(unionaarr.size() == 0 || unionaarr.back() != a[i]){
                unionaarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionaarr.size() == 0 || unionaarr.back() != b[j] ){
                unionaarr.push_back(b[j]);
            }
            j++;
        }

    }
    while (i < n1)
    {
        if(unionaarr.size() == 0 || unionaarr.back() != a[i]){
            unionaarr.push_back(a[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if(unionaarr.size() == 0 || unionaarr.back() != b[j]){
            unionaarr.push_back(b[j]);
        }
        j++;
    }
    
}
int main() {
    int n1;
    cout << "Enter size of array 1 : ";
    cin >> n1;

    int a[n1];

    for (int i = 0; i < n1; i++) {
        cout << "Enter " << i << " Element : ";
        cin >> a[i];
    }

    int n2;
    cout << "Enter size of array 2 : ";
    cin >> n2;

    int b[n2];

    for (int i = 0; i < n2; i++) {
        cout << "Enter " << i << " Element : ";
        cin >> b[i];
    }

    vector<int> unionarr;
    union_Array(n1,n2,a,b,unionarr);


    for(auto it : unionarr) {
        cout << it << " ";
    }

    return 0;
}