//  pattern 15- https://takeuforward.org/practice/dsa/pattern-15

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number you want to print :";
    cin >> n;
    
    
    for (int i = 1; i <= n; i++)
    {
        char alpha='A';
        for (int j = 1; j <= n-i+1; j++){
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }
    
    

    return 0;
}