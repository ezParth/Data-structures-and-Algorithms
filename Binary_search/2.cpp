#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    int mid = (low+high)/2;
    while(low<=high){
        if(arr[mid] >= x){
            high = mid - 1;
            ans = mid;
        } else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int x;
    cin>>x;
    func(arr, n, x);
    return 0;
}