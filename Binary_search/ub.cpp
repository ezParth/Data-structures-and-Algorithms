/*
upperbound => smallest index such that arr[index] > x
 */

#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int n, int x){
    int low=0, high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
   }
   return ans;
}

int main(){
    int n=5;
    int arr[]={2,3,4,5,6};
    int x;
    cin>>x;
    cout<<func(arr, n, x);
    return 0;
}