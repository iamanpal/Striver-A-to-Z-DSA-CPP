
#include <bits/stdc++.h>
using namespace std;

int main() {
    
   string s ="Aman";
   
   sort(s.begin(), s.end()); //Sort the string to generate all permutations
   do{
    cout << s  << endl;
   }
   while (next_permutation(s.begin(),s.end()));
    return 0;
}
