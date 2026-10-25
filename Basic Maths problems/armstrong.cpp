
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter number : ";
    cin >> n;
    int duplicate = n;
    int temp = n;
    int count_number = 0;//used to store counting of the number .
    int  sum = 0; // Initialized to store sum of number
    int lastdigit; //Intialized to extract last digit  

    while (temp > 0) {
        count_number++;
        temp = temp / 10;
    }

    while( n > 0){
        lastdigit = n % 10;
        sum = sum + pow(lastdigit,count_number);
        n = n / 10;
    }
    
    //conditon to check armstrong.
    if (duplicate == sum) {
        cout << "Its a armstrong number.";
    }
    else cout <<  "Its not an armstrong number";
    
    return 0;
}
