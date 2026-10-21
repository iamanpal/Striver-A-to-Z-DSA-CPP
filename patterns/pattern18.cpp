//  pattern 18- https://takeuforward.org/practice/dsa/pattern-18

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number you want to print :";
    cin >> n;
    
    
    for (int i = 0; i < n; i++)
    {
        
        for (char ch = 'E'-i; ch <= 'E'; ch++){
            cout << ch << " ";
            
        }
        cout << endl;
    }
    
    

    return 0;
}