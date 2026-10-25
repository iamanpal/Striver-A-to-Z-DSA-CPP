
#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cout << "enter number :";
    cin >> n;

    int  counter = 0; // Initialized for counting the digits
    int  lastdigit = 0;// Initialized for extracting  the last digits
    //for negative numbers we will first convert into absolute value 

    //and use this condition  while(abs(n) > 0){
    while( n > 0){
        lastdigit = n % 10;

        //checking odd digit
        if (lastdigit % 2 != 0){
            
            counter ++;

        }

        n = n /10;
    }
    
    cout << "odd digit is :" <<counter ;
    
    return 0;
}
