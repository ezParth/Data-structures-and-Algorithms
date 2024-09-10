// intersection means find common between them and make an array
// a=[1,2,3,4,5,5,6] b=[1,2,5,5,9] => [1,2,5,5]

#include <bits/stdc++.h>
using namespace std;

vector <int> sortedArray(vector<int> a, vector<int> b){
    int n1=a.size();
    int n2=b.size();
    int arr[n2] = {0};
    vector<int> ans;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i] == b[i] && arr[j] == 0){
                ans.push_back(b[j]);
                arr[j] = 1;
            }
            if(a[i]<b[j]) break;
        }
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
    vector<int> result = sortedArray(arr1, arr2);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}