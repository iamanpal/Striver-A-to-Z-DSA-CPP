
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1;
    cout << "Enter number  1st :";
    cin >> n1; 
    int  n2; 
    cout << "Enter number  2nd :";
    cin >> n2;
    int  lcm;

    for (int i = max(n1,n2); ; i++ ) {
        if (i % n1  == 0 && i % n2 == 0 ){
            lcm  = i; 
            break;
        }
    }

    cout << "Lcm of these numbers are : "<< lcm;

    return 0;
}