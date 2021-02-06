#include <bits/stdc++.h>
using namespace std;

int maxSubArrSum(int n, int arr[]){
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0; i<n; i++){
        if(arr[i] + currSum > 0){
            currSum = arr[i] + currSum;
            maxSum = max(maxSum, currSum);
        }
        else{
            currSum = 0;
            maxSum = max(maxSum, currSum);
        }
    }


    return maxSum!=0?maxSum:*max_element(arr, arr + n);
}

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << maxSubArrSum(n, arr) << endl;
}