// if the array is not sorted;

#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(int n, vector<int> &arr){
    vector<int> temp;
    if(n == 0) return temp; //for empty arrays
    temp.push_back(arr[0]);
    for(int i=1;i<n;i++){
            auto it = find(temp.begin(), temp.end(), arr[i]);//if the element doesn't exists, the find function returns temp.end()
            if(it == temp.end()){
                temp.push_back(arr[i]);
            }
    }
    return temp;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> temp = removeDuplicate(n, arr);
    for(int value : temp){
        cout<<value<<" ";
    }
    cout<<endl;
    cout<<"Size of array with no duplicates is: "<<temp.size();
    return 0;
}