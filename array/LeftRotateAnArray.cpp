// Left rotate the array by one place
// [1,2,3,4,5] => [2,3,4,5,1]

#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n){
    //if we have to rotate them by only one place
    int temp = arr[0];
    for(int i=0;i<n-1;i++){
            arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRotate(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}