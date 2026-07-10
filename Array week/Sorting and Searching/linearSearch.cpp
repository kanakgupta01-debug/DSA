#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &v, int target) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == target) {
            return i;   // Return index if found
        }
    }
    return -1;          // Element not found
}

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int ans = linearSearch(v, target);
    if (ans != -1)
        cout << "Element found at index: " << ans;
    else
        cout << "Element not found";
    return 0;
}