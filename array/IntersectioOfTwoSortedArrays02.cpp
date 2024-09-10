//optimised solution

#include <bits/stdc++.h>
using namespace std;

vector <int> sortedArray(vector<int> a, vector<int> b, int m, int n){

    int i = 0;
    int j = 0;
    vector<int> ans;
    if(a[i] < b[j]){
        i++;
    }else if(b[j]< a[i]){
        j++;
    }else {
        ans.push_back(a[i]);
        i++;
        j++;
    }

    return ans;
}

int main() {
    int n, m;
    cin>>n;
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> result = sortedArray(arr1, arr2, m, n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}