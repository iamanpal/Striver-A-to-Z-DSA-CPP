#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;
    cout << "Enter number : ";
    cin >> n;
    int sum = 0;
    
    for ( int i = 1; i <= n; i++) {
        if (n % i== 0){
            if(i != n){
                sum += i;
            }
        }
    }

   if (sum == n) {
    cout << "Its a perfect number";
   }
   else cout << "Its not a perfect number";

    return 0;
}