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