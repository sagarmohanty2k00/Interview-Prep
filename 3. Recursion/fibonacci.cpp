#include <iostream>
using namespace std;

typedef long long int lli;

int fib(int x){
	// Base Case 
	if(x == 0 or x == 1){
		return x;
	}

	// Recurssive Case
	int ans = fib(x-1) + fib(x-2);
	
	return ans;

}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;cin >> x;

	cout << fib(x) << endl;

}