// Maximum Consecutive Number of 1's
///arr[] = [1,1,0,1,1,1,0,1,1] => ans is 3 as maximum consecutive came here out 2,3,2 is 3 as one has came 1,1,1 three times here

#include <bits/stdc++.h>
using namespace std;

int ConsNums(int arr[], int n){
    int maxi = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            cnt++;
            maxi = max(maxi, cnt);
        }else{
            cnt = 0;
        }
    }

    return maxi;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = ConsNums(arr, n);
    cout<< ans;
    return 0;
}