#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    vector <int> v;
    //TC = O(N)
    for ( int i = 2; i <= n; i++) {
            int  factors = 0;
        for ( int j = 1; j <= i; j++){
            if (i % j== 0){
            factors++;
            }



        }
            if (factors == 2){   
            v.push_back(i);
        }
     
    }
    
    for (auto it : v) {
        cout << it << endl;
    }
    return 0;
}