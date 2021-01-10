#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

void countSetBits(int n){
	// Method 1
	int ans = 0;
	while(n>0){
		ans += (n&1);
		n = n>>1;
	}

	cout << ans << endl;
}


void countSetBitsFast(int n){
	// Method 2
	int ans = 0;
	while(n>0){
		n = n & (n-1);
		ans++;
	}

	cout << ans << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	countSetBits(n);
	countSetBitsFast(n);
	// Fastest Method
	cout << __builtin_popcount(n) << endl;
}



