#include<bits/stdc++.h>
using namespace std;


//mergig the sorte arrays
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    
    //storing temp into arr
    for(int i=low; i<=high;i++){
        arr[i] = temp[i-low];
    }
}

//main logic
void ms(vector<int> &arr, int low, int high){
    if(low == high) return ;
    int mid = (low+high)/2;
    ms(arr, low, mid);
    ms(arr, mid+1, high);
    merge(arr, low, mid, high);
}

//calling ms
void mergeSort(vector <int> &arr, int n){
    // ms(arr, initial low, initial high)
    ms(arr, 0, n-1);
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*
    when something is getting divided by 2 multiple times
    its time complexity will become log2(n)

    merge -> O(n);

    time complexity => O(n*log2(n));
    space complexity => O(n);

    **!study recusive bubble sort and recursivr insertion sort!**
 */