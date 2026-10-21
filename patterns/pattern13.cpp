//  pattern 13- https://takeuforward.org/practice/dsa/pattern-13

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter how many times: ";
    cin >> n;
  
    int start = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++){
            cout << start << " ";
            start++;
        }
        
        cout << endl;
        
    }
    return 0;
}