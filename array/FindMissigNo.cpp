#include <bits/stdc++.h>
using namespace std;

int Number(int a[], int n){
    int ans = -1;
    for(int i = 0; i < n-1; i++){
        if(a[i] != i+1){
            ans = i+1;
            break;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n; // Take input for n
    int arr[n-1];
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    int MissingNumber = Number(arr, n);
    cout << MissingNumber;
    return 0;
}
