#include <bits/stdc++.h>
using namespace std;

int upperBound(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] <= x) {
            low = mid + 1;
        } else {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n = 6;
    int arr[] = {1, 2, 3, 5, 6, 7};
    int x;
    cout << "Enter the target value: ";
    cin >> x;
    int result = upperBound(arr, n, x);
    if (result != n) {
        cout << "Upper bound of " << x << " is at index " << result << endl;
    } else {
        cout << "Upper bound does not exist" << endl;
    }
    return 0;
}
