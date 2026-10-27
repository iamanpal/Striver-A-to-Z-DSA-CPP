#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1;
    cout << "Enter number  1st :";
    cin >> n1; 
    int  n2; 
    cout << "Enter number  2nd :";
    cin >> n2;
    int gcd = 1;

    for (int i = 1; i <= min(n1,n2); i++) {
        if (n1 % i == 0 && n2 % i == 0){
            gcd =  i;
        }
    }
    cout << "Greatest common divisior  is : " << gcd;
    return 0;
}