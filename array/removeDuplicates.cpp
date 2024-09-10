// if the array is sorted;

#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(int n, vector<int> &arr) {
    if (n == 0) return arr; // Handle empty array case

    sort(arr.begin(), arr.end()); // Ensure the array is sorted

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    arr.resize(i + 1);
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    arr = removeDuplicate(n, arr);
    for (int value : arr) {
        cout << value << " ";
    }
    return 0;
}
