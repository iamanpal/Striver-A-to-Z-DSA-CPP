
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
  
    cout <<  "Enter string : ";
    cin >> s;

    //precompute the  hash array & its size by using ASCII of characters.
    //approach for lower case letter
    int hasharr[26] = {0};
    for ( int i = 0; i < s.size() ; i++) {
        hasharr[s[i]-'a'] ++;
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
        cout <<  hasharr[c-'a'] << endl;
        
    }
    

    
    
    
    return 0;
}
