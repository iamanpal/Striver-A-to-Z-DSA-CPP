//  pattern 21- https://takeuforward.org/practice/dsa/pattern-21

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter how many times: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++){
            if (i == 1 || j == 1|| i == n || j == n) cout <<  "*";
            else cout << " ";
        }
        cout << endl;
    }
     
    return 0;
}