#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            return mid;
        }else if(target > arr[mid]){
            low = mid+1;  
        }else{
            high = mid-1;
        }
    }
    return - 1;
}

int main(){
    int n = 7;
    int arr[] = {1,2,3,4,5,6,7,8};
    int target;
    cin>>target;
    cout<<func(arr, n, target);
    return 0;
}