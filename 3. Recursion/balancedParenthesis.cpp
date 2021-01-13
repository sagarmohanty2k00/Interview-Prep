// Generate balanced Parenthesis

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int generateParenthesis(int n, int l, int r, string p){
	if(r == n){
		cout << p << " ";
		return 1;
	}

	int lp = 0, rp = 0;
	if(l > r){
		rp = generateParenthesis(n, l, r+1, p+")");
		if(l < n){
			lp = generateParenthesis(n, l+1, r, p+"(");
		}
	}

	else if(l < n){
		lp = generateParenthesis(n, l+1, r, p+"(");
	}

	return lp+rp;
}

int main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n; cin >> n;

	int l = 0;
	int r = 0;

	int allPossible = generateParenthesis(n, l, r, "");
	cout << "\n" << allPossible << endl;
}