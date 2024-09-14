#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int low, int high, int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) return func(arr, mid+1, high, target);
    else return func(arr, low, mid-1, target); 
}

int main(){
    int n = 7;
    int arr[] = {2,3,4,5,6,7,8};
    int target;
    cin>>target;
    cout<<func(arr, 0, n-1, target);

    return 0;
}