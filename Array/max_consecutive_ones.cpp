// OPTIMAL APPROACH
// TC = O(N)
// Auxiliary SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int consecutive_one_max(int n, int arr[])
{
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " Element : ";
        cin >> arr[i];
    }

    cout << "Maximum consecutive ones  is :" << consecutive_one_max(n, arr);

    return 0;
}