#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //sorting algo
    for(int j=0; j<n-1;j++){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
      }
    }

    for(int i=0;i<n;i++){
        cout<<i<<"-"<<arr[i]<<endl;
    }
    return 0;
}