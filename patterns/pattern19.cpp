//  pattern 19- https://takeuforward.org/practice/dsa/pattern-19


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number you want to print :";
    cin >> n;

    // upward symmetry
    // int space = 0;

    for (int i = 1; i <= n; i++) {
        int space = 2 * (i - 1);

        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        for (int k = 1; k <= space; k++) {
            cout << " ";
        }

        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // downward symmetry

    for (int i = 1; i <= n; i++) {
        int stars1 = 2 * (n - i);


        // for stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // for spaces
        for (int k = 1; k <= stars1; k++) {
            cout << " ";
        }

        // for stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;

        
    }

    return 0;
}
