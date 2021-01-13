// Count Binary Strings
// ---------------------
// Count binary strings of length N, whichhave no consicutive ones.

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int countBinaryStrings(int n, int i){
	if(i > n){
        return 0;
    }
    if(i == n){
		return 1;
	}
	
	return countBinaryStrings(n, i+1) + countBinaryStrings(n, i+2);

}

// or

int countTotalBinaryStrings(int n){
	return (1<<n);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << countBinaryStrings(n, 0) << endl;

	cout << countTotalBinaryStrings(n);


	return 0;

}