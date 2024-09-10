#include<bits/stdc++.h>
using namespace std;

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = a;
// }

int func(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i<=high-1){
            i++;
        }
        while(arr[j] >= pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high){
    if(low<high){
        int PI = func(arr, low, high);
        qs(arr, low, PI-1);
        qs(arr, PI+1, high);
    }
}


vector <int> quickSort(vector<int> &arr, int n){
    qs(arr, 0, n-1);
    return arr;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

/*
    **Time complexity: N*log(N)
 */