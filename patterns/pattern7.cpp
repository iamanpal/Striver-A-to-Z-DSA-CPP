//  pattern 7- https://takeuforward.org/practice/dsa/pattern-7

// pyramid star pattern

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter how many times :";
    cin >> n;
    for (int i = 1; i <= n ; i++ ){

        // for spaces
        for(int k = 1; k <= n-i ; k++){
            cout << " ";
        }

        // for stars
        for(int j = 1; j <= 2*i-1 ; j++){
            cout << "*";
        }
        // for spaces
        for(int k = 1; k <= n-i ; k++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}