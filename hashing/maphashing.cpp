
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    map <int,int> mpp; //declared map
    for (int i = 0; i < n ; i ++) {
        cout << "Enter " << i+1 << " element in array ";
        cin  >> arr[i];
        mpp[arr[i]]++; //precomputing map
    }
    

    int q;
    cout << "Enter no. of queries ";
     cin >> q;
    while (q--)
    {
        int number;
        cout  << "Enter number ";
        cin >> number;
        //fetching the frequency using map
        cout <<  mpp[number] << endl;
        
    }

    return 0;
}
