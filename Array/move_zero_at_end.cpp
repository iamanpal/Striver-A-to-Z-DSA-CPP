#include <bits/stdc++.h>
using namespace std;
void move_zero(int  n, int arr[] ,vector<int> &temp){

    for (int i = 0; i < n; i++){
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];

    }

    for (int i = temp.size(); i < n; i++){
        arr[i] = 0;
    }

}

int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    vector<int>temp;

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << " Element : ";
        cin >> arr[i];
    }

    move_zero(n,arr,temp);

    for (int i = 0; i < n; i++) {
        cout << arr[i] <<  " ";
    }



    return 0;
}