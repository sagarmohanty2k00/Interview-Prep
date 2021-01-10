#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a; cin >> a;
	int n; cin >> n;

	int ans = 1;
	while(n>0){
		if(n & 1){
			ans *= a;
		}

		a *= a;
		n = n >> 1;
	}


	cout << ans;
}
