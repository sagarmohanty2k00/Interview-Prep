#include <iostream>
using namespace std;

typedef long long int lli;

int fact(int x){
	// Base Case 
	if(x == 0){
		return 1;
	}

	// Recurssive Case
	int small_ans = fact(x-1);
	int ans = x * small_ans;

	return ans;

}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;cin >> x;

	cout << fact(x) << endl;

}


