//left rotate an array by D-places
//arr [] = {1,2,3,4,5,6,7} d = 2 => {3,4,5,6,7,1,2}


//watch this video

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int d){
    if(n == 1){
        d = 1;
    }else if (n == 0){
        d = 0;
    }else if(d>n){
        d = d%n;
    }
    int temp[d];
    int j = 0;
  

    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }

    for(int i=0; i<n-d; i++){
        // j = i-d;
        // if(j<0){
        //     j = n - d + i;
        // }
        arr[i] =  arr[i+d];
    }
    for(int k=0;k<d;k++){
        arr[n-d+k] = temp[k]; 
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rotate(arr, n, d);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}