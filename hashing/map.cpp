#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
    return 0;
}

/*collision: In the context of hashing and hash maps, 
a collision occurs when two or more distinct keys hash to the same index or bucket in the underlying array. */

/*
divison method: we store using mod10 or %10 -> 139->9, 48-> 8

collision resolution techniques:

>Linear Porbing: agar wo filled hai to enxt waale me fill krdo
defination: When a collision occurs, linear probing searches for the next available slot (usually the next index) in the hash table.

>Linear chahing:When two or more keys hash to the same index (i.e., collide), 
linear chaining stores them in a linked list at that index.
e.g. index 2=>12->22->42
 */

/*
          **Time complexity**

  > unordered map: O(1), in worst case O(n) where n is the number of elements and this worst case occurs during collision        

  > map: Storing(i.e. insertion) and fetching(i.e. retrieval) in a C++ map, 
  both take always O(logN) time complexity, where N = the size of the map. 

   $ In the map data structure, the data type of key can be anything like int, double, pair<int, int>, etc.
     But for unordered_map the data type is limited to integer, double, string, etc. We cannot have an unordered_map whose key is pair<int, int>.
 */