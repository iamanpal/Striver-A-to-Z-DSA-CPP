
#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cout << "enter number :";
    cin >> n;

    
    int  lastdigit = 0;// Initialized for extracting  the last digits
    int largest_digit = 0;
    
    //for negative numbers we will first convert into absolute value 
    //and use this condition  while(abs(n) > 0){
    while( n > 0){
        lastdigit = n % 10;

        //checking largest  digit if last digit is largest then store it into largest_digit
        if (lastdigit > largest_digit){
            
            largest_digit = lastdigit;

        }

        n = n /10;
    }
    
    cout << "largest digit in whole  number is  :" << largest_digit ;
    
    return 0;
}
