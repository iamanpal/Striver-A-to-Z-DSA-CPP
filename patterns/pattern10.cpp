//  pattern 10- https://takeuforward.org/practice/dsa/pattern-10

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter how many times :";
    cin >> n;;
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if(i>n) stars =2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}