#include <bits/stdc++.h>
using namespace std;

int MissingNumber(int arr[], int n){
    int sum = (n*(n+1))/2;
    int sum2 = 0;
    for(int i=0; i<n-1;i++){
        sum2 += arr[i];
    }
    return( sum - sum2);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n-1;i++){
        cin>>arr[i];
    }
    int ans = MissingNumber(arr, n);
    cout<<ans;
    return 0;
}