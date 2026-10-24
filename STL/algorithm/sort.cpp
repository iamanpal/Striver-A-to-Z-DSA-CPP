
#include <bits/stdc++.h>
using namespace std;

int main() {
    //initialized array of size 5
    int arr[5] = {9,15,3,8,5};

    //sort algorithm in STL 
    sort (arr , arr + 5);
  
    // traversing array
    for (int i=0 ; i < 5; i++) {
        cout << arr [i] << " ";
        
    }
    cout << endl;
    
    //initialized vector 
    vector <int> v = {5,7,1,6,1};

    v.erase(v.begin());//deleted 5

    //sort algorithm in STL 
    sort(v.begin(),v.end());
    
    // traversing vector using iterator
    for (auto it = v.begin() ; it != v.end (); it++) {
        cout  << *it << " ";
    }
    
    cout << endl;

    int arr1[5] = {9,15,3,8,5};

    sort (arr1 , arr1 + 5  ,greater <int>()); //sorting array in desc order

    for (int i=0 ; i < 5; i++){
        cout  << arr1[i] << " ";
    }


    return 0;
}
