#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);

    // Search = find
    int key;
    cin >> key;

    auto it = find(arr, arr+n, key);
    // This actually returns a key
    int index = it - arr;
    if(index == n){
        cout << "element not present" << endl;
    }
    else{
        cout << index << endl;
    }
    cout << it << endl;
}