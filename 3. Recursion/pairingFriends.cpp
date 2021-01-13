// Friends and Pairing
// given n, friends who want to go to a party on bikes. Each guy can go as single, or as a couple.
// Find the number of ways in which n friends can go to the party.


#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int pairingFriends(int n){
	
	if(n == 0){
		return 1;
	}
	if(n == 1){
		return 1;
	}

	int ways = 0;
	ways = pairingFriends(n-1) + ((n-1) * pairingFriends(n-2));


	return ways;

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;

	cout << pairingFriends(n);


	return 0;

}