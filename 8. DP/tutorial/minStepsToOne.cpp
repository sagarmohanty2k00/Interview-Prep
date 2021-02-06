#include <bits/stdc++.h>
using namespace std;

// Minimum Steps to One
// n -> n/3, n/2, n-1

int minSteps(int n){
    int ans;
    int dp[n+1];
    
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=n; i++){
        ans = INT_MAX;
        if(i % 3 == 0){
            ans = min(ans, dp[i/3]);
        }

        if(i%2 == 0){
            ans = min(ans, dp[i/2]);
        }

        dp[i] = min(ans, dp[i-1]) + 1;
    }
    
    return dp[n];
}

int main(){
    int n;
    cin >> n;

    cout << minSteps(n) << endl; 
}