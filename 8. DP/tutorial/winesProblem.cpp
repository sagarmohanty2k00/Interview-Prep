#include <bits/stdc++.h>
using namespace std;

// p = [2, 3, 5, 1, 4]
// p[i] = price of ith wine
// in one year you have to sell only one bottle of wine

// price of with increases each year
// p[i] after 'y' years is = p[i] * y


// Optimization - Maximize the profit

int maxProfit(int arr[], int n){
    int dp[n][n];

    for(int i=0; i<=n; i++){
        for(int j=0; j<n-i; j++){
            if(i == 0){
                dp[j][j] = arr[j] * n;
            }
            else{
                dp[j][j+i] = max(
                    arr[j]*(n-i) + dp[j+1][j+i],
                    arr[j+i]*(n-i) + dp[j][j+i-1]
                );
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[0][n-1];

}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    cout << maxProfit(arr, n) << endl;
}