#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;

typedef long long int lli;

void replaceBitsInNbyM(int n, int m, int i, int j){
	m = m << i;

	int ans = n;

	int a = -1 << (j + 1);
	int b = ~(-1 << i);
	int mask = a | b; // Clear Bits in a range... ^_^
	ans = (ans & mask);
	ans = ans | m;

	cout << ans;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int m; cin >> m;

	int i, j;
	cin >> i >> j;

	replaceBitsInNbyM(n, m, i, j);
}