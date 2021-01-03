#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<int> vi;
	for(int i=0; i<n; i++){
		int v;
		cin >> v;
		vi.push_back(v);
	}
	int ans = 0;

	for(auto x : vi){
		ans ^= x;
	}

	cout << ans;
}