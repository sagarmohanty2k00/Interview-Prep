// Lader of n steps
// return number of ways to reach the top

#include <bits/stdc++.h>
using namespace std;

int minimumStep(int totalSteps, int maxJumps){
    int dp[totalSteps+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    int currJumps, minJumps;
    for(int i=3; i<=totalSteps; i++){
        currJumps = 0;

        for(int jump=1; jump<=min(maxJumps, i); jump++){
            currJumps += dp[i-jump];
        }

        if(maxJumps >= i)
            dp[i] = currJumps + 1;
        else{
            dp[i] = currJumps;
        }
    }

    return dp[totalSteps];
}

int main(){
    int n, k;
    cin >> n >> k;

    cout << minimumStep(n, k) << endl;
}