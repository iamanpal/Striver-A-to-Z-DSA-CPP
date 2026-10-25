
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter number : ";
    cin >> n;
    int duplicate = n;
    int  rev_num = 0; // Initialized to store reverse of number
    int lastdigit; //Intialized to extract last digit  
    while( n > 0){
        lastdigit = n % 10;
        rev_num = (rev_num * 10) +lastdigit;
        n = n / 10;
    }
    
    if (duplicate == rev_num) {
        cout << "Yes its a palindrome number.";
    }
    else cout <<  "Its not an palindrome number";
    
    return 0;
}
