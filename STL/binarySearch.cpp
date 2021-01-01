#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 3, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);

    // Search = binary_search - if the array is sorted
    int key;
    cin >> key;

    auto present = binary_search(arr, arr+n, key);
    // This returns a 'true' or 'false' || '1' 0r '2'
    cout << present << endl;

    // upper_bound()
    auto ub = upper_bound(arr, arr+n, key);
    cout << "Upper Bound = " << (ub-arr-1) << endl;

    // lower_bound()
    auto lb = lower_bound(arr, arr+n, key);
    cout << "Lower Bound = " << (lb-arr) << endl;

    cout << "Frequency of occurance of " << key << " is "<< endl;
}