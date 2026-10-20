//  pattern 8- https://takeuforward.org/practice/dsa/pattern-8

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter how many times :";
    cin >> n;

    for (int i = 1; i <= n; i++ ){
        // for spaces
       for ( int j = 1; j <= n-i; j++){
           cout << " ";
       }
          // for stars
        for ( int k = 1; k <= 2*i-1; k++){
            cout << "*";
        }

         // for spaces
       for ( int j = 1; j <= n-i; j++){
           cout << " ";
       }
        cout << endl;
    }

    for (int i = 1; i <= n; i++ ){
        // for spaces
       for ( int j = 1; j <= i-1; j++){
           cout << " ";
       }
          // for stars
        for ( int k = 1; k <= 2*(n-i)+1; k++){
            cout << "*";
        }

         // for spaces
       for ( int j = 1; j <= i-1; j++){
           cout << " ";
       }
        cout << endl;
    }
    
    return 0;
}