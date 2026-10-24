
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i ++) {
        cout << "Enter " << i+1 << " element in array ";
        cin  >> arr[i];
    }
    //precompute the  hash array & its size
    int hasharr[13]={0};
    for ( int i = 0; i < n ; i++) {
        hasharr[arr[i]] += 1;
    }

    int q;
    cout << "Enter no. of queries ";
     cin >> q;
    while (q--)
    {
        int number;
        cout  << "Enter number ";
        cin >> number;
        //fetching the element  in hasharray
        cout <<  hasharr[number] << endl;
        
    }
    

    
    
    
    return 0;
}
