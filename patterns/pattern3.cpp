//  pattern 1- https://takeuforward.org/practice/dsa/pattern-3


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter how many times you want to print :";
    cin >> n;
    for (int i = 1; i <= n ; i++ ){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
  
    return 0;
}
