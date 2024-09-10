// In selection sort we swap the first number of the unsorted array with minimum number

#include<bits/stdc++.h>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x=y;
    y=temp;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //selection sort
    for(int i=0;i<n-1;i++){
    int minIndex = i;
        for (int j = i+1; j < n; j++){
            if(arr[j]<arr[i]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for(int i=1;i<n;i++){
        cout<<arr[i-1]<<", ";
    }
    cout<<arr[n-1];
    return 0;
}