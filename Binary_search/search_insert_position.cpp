#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr={1,2,3,4,5,6,8};
    int target = 7;
    auto it = lower_bound(arr.begin(), arr.end(), target);
    if(it != arr.end()){
        cout<<it - arr.begin();
    }else {
        cout<<arr.size();
    }
    return 0;
}