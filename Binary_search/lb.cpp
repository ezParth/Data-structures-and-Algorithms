/*
lower bound: smallest index such that arr[index] >= x
e.g: arr[]={3,5,8,15,19} and n = 5 and x = 8;
lb = 2
if x=9 lb=3 as 15>=9
if x=20 lb=5(hypothetical index)
 */

#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int n, int x){
    int low=0, high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
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