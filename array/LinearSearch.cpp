#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin >> num;
    int ans = LinearSearch(arr, n, num);
    cout<<"The value of Index of "<<num<<" is "<<ans;
    return 0;
}