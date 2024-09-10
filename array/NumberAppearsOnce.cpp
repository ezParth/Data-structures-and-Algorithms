// ..Find the Number that appears once
// arr[] = [1,1,2,3,3,4,4] => 2;,we can use basic for loop, then hashing and maps for bigger number and then an optimal soluiton usin XOR

#include <bits/stdc++.h>
using namespace std;

int SingleNumber(int arr[], int n){
    int xorr = 0;
    for(int i=0;i<n; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = SingleNumber(arr, n);
    cout<<ans;
    return 0;
}