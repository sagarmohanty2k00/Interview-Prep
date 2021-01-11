#include <iostream>
using namespace std;

typedef long long int lli;

int recurssivePower(int a, int n){
	// Base Case 
	if(n  == 0){
		return 1;
	}

	// Recurssive Case
	int ans = recurssivePower(a, n/2);
	if(n%2 == 0){
		return ans*ans; 
	}
	else{
		return ans*ans*a;
	}
}



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x; cin >> x;
	int y; cin >> y;

	cout << recurssivePower(x, y) << endl;
}



