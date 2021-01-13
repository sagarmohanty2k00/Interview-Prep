#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int jumpingLader(int n, int i){
	if(i == n){
		return 1;
	}
	if(i > n){
		return 0;
	}

	
	return jumpingLader(n, i+1) + jumpingLader(n, i+2) + jumpingLader(n, i+3);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << jumpingLader(n, 0);

}