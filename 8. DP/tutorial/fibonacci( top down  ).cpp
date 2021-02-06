#include <bits/stdc++.h>
using namespace std;

int fib(int n, int dp[]){
    if(n == 0 or n == 1){
        return n;
    }

    // Recurssive Case
    // Look Up
    if(dp[n] != 0){
        return dp[n];
    }

    int ans = 0;
    ans = fib(n-1, dp) + fib(n-2, dp);
    return dp[n] = ans;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n;
    cin >> n;

    int dp[n+1];
    for(int i=0; i<n+1; i++){
        dp[i] = 0;
    }
    cout << fib(n, dp) << endl;
    
}
    