#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int p;
    cin>>p;
    int marks[p]={0};
    for(int i=1;i<p;i++){
        for(int j=0;j<n;j++){     
            if(arr[j] == i){
            marks[i-1]++;
            }
        }
    }
    for(int i=0;i<p;i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}