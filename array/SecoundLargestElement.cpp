#include<bits/stdc++.h>
using namespace std;

int secoundSmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest = ssmallest;
            smallest = arr[i];
        }else if(arr[i]!=smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int secoundLargest(vector<int> &arr, int n){
    int largest = arr[0];
    int slargest = -1;//INT_MIN
    for(int i=1;i<n;i++){
        if(arr[i]> largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

vector <int> getSecoundOrderElements(vector<int> &arr, int n){
    int slargest = secoundLargest(arr, n);
    int ssmallest = secoundSmallest(arr, n);
    return {slargest, ssmallest};
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[n];
    }
    getSecoundOrderElements(arr, n);
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int print2largest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1; // If there are less than 2 elements, return -1

        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        // Find the largest and second largest element
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                secondLargest = largest; // Update second largest
                largest = arr[i]; // Update largest
            } else if (arr[i] > secondLargest && arr[i] < largest) {
                secondLargest = arr[i]; // Update second largest
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest; // Return -1 if second largest does not exist
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl; // Output the result
    }
    return 0;
}
 */