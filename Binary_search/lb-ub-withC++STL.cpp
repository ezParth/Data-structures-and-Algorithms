#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> v={1,2,3,4,5,6};
    int target = 4;
    auto it = std::lower_bound(v.begin(), v.end(), target);
    if(it != v.end()){
        std::cout<<"Lower bound of "<<target<<" is at index "<<( it -v.begin())<<" with value "<<*it;
    }else{
        std::cout<<it - v.end();
    }
    return 0;
}