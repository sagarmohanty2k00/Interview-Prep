#include <bits/stdc++.h>
using namespace std;

// Minimum Coin Change Problem
// coins = [1, 2, 5, 10, 20, 50, 100, 200, 500, 2000]
// 55 -> 50 + 5 ( minimum number of coins )

int minCoinChange(int n){
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int dp[n+1];
    dp[0] = 0;

    int ans;

    for(int i=1; i<=n; i++){
        ans = INT_MAX;
        for(auto x : coins){
            if(x <= i){
                ans = min(ans, dp[i - x]);
            }
        }

        dp[i] = ans + 1;
    }


    return dp[n];
}

int main(){
    int n; 
    cin >> n;

    cout << minCoinChange(n) << endl;
}