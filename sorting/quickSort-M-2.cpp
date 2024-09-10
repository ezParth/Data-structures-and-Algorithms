#include<bits/stdc++.h>
using namespace std;

int particion(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low+1;
    for(int j = low+1; j <= high; j++){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[low], arr[i-1]);
    return i-1;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int pi=particion(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}