#include <bits/stdc++.h>
using namespace std;

int main() {
    int a ;
    cout << "Enter first number :";
    cin >> a;
    int b;
    cout << "Enter second number :";
    cin >> b;
 
    while (a > 0 && b > 0 ) {
        if ( a > b ) {
            a = a % b; 
        } 
        else{
            b = b % a;
        }
    }
    if (a == 0) cout  << "GCD is " << b;
    else cout << "GCD is " << a;

    return 0;
}