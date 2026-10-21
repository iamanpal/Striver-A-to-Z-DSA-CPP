//  pattern 11- https://takeuforward.org/practice/dsa/pattern-11


#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter how many times: ";
    cin >> n;

    int one = 1;

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) one = 0;
        else one = 1;

        for (int j = 1; j <= i; j++) {
            cout << one;
            one = 1 - one;
        }

        cout << endl;
    }

    return 0;
}
