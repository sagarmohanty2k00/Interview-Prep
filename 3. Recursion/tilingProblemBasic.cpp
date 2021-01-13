// https://leetcode.com/problems/domino-and-tromino-tiling/
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int tiling(int n){
	if(n <= 3){
		return 1;
	}

	return tiling(n-1) + tiling(n-3);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << tiling(n);

}

