
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
  
    cout <<  "Enter string : ";
    cin >> s;

    //precompute the  hash array & its size by using ASCII of characters.
    //approach for lower case letter because we trying to reduce the size of hasharr.

    // int hasharr[26] = {0};
    // for ( int i = 0; i < s.size() ; i++) {
    //     hasharr[s[i]-'a'] ++;
    // }


    //approach for both  lower case  and  uppercase letter
    int hasharr1[256] = {0};
    for ( int i = 0; i < s.size() ; i++) {
        hasharr1[s[i]] ++;
    }

    int q;
    cout << "Enter no. of queries ";
     cin >> q;
    while (q--)
    {
        char c;
        cout  << "Enter character ";
        cin >> c;

        //fetching the element  in hasharray

        // cout <<  hasharr[c-'a'] << endl; 

        cout <<  hasharr1[c] << endl;
        
    }
 
    return 0;
}
