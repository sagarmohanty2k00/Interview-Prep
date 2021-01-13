// TOH
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int TOH(int n, string source, string helper, string destination){
	if(n == 1){
		return 1;
	}

	int steps = 0;
	steps += TOH(n-1, source, destination, helper);
	steps += TOH(1, source, helper, destination);
	steps += TOH(n-1, helper, destination, source);


	return steps;

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;

	string source = "source";
	string helper = "helper";
	string destination = "destination";

	int steps = 0;

	cout << TOH(n, source, helper, destination);

	return 0;

}