// pattern 1- https://takeuforward.org/practice/dsa/pattern-1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "How many times want to print ";
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
