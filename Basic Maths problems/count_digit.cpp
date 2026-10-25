
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter number :";
    cin >> n;
    int  counter = 0; // Initialized for counting the digits

    while( n > 0){
        n = n / 10;
        counter ++;
    }
    
    cout << "digit is :" <<counter ;
    
    return 0;
}
