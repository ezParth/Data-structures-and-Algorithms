// give me a union of array and don't have repeated arrays
// arr1=[1,1,2,3,4,5], arr2=[2,3,4,4,5,6] => union=[1,2,3,4,5,6]

#include<bits/stdc++.h>
using namespace std;

vector <int> sortedArray(vector <int> a, vector <int> b){
    int n1 = a.size();
    int n2 = a.size();
    int i = 0;
    int j = 0;
    vector <int> unionArr;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }else{
            if(unionArr.size() == 0  || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
    }
    return unionArr;
}

int main(){
    int n, m;
    cin>>n;
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[m];
    }
    vector<int> result = sortedArray(arr1, arr2);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }

    return 0;
}