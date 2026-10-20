//  pattern 5- https://takeuforward.org/practice/dsa/pattern-5

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter how many times :";
    cin >> n;
    for (int i = 1; i <= n ; i++ ){
        for(int j = n; j >= i; j--){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}