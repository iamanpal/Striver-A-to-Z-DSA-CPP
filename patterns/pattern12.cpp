//  pattern 12- https://takeuforward.org/practice/dsa/pattern-12

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter how many times: ";
    cin >> n;
  

    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++){
            cout << " ";  
        }
        
        // char
        char ch = 'A';
        int breakpoint = (2*i-1)/2;
        for (int k = 1; k <= 2*i-1; k++){
            cout << ch;
            if (k <= breakpoint) ch++;
            else ch--;
        }
        
        // spaces
        for (int j = 1; j <= n-i; j++){
            cout << " ";  
        }
        
        cout << endl;
       
    }
        

    return 0;
}