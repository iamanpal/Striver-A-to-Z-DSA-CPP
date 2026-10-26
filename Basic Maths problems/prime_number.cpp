#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;
    int  cnt = 0;
    
    //TC = O(N)
    for ( int i = 1; i <= n; i++) {
        if (n % i== 0){
            cnt++;
        }
    }

    if (cnt == 2){
        cout << "Its a prime number ";
    }
    else cout << "Its not a prime number ";


    return 0;
}