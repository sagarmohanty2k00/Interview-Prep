// Subsequence or Subset Generation - non contineous
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int subsetof(string s, string sub, int i, int n){
	if(i == n){
		cout << sub << " ";
		return 1;
	}

	string asub = sub;
	string bsub = sub;

	asub += s[i];
	int a = subsetof(s, asub, i+1, n);
	int b = subsetof(s, bsub, i+1, n);

	return (a + b);

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s; cin >> s;
	int ans = subsetof(s, "", 0, s.length());

	cout << endl;
	cout << ans;
}