// Program to manipulate Multiple Bits in a number in C++


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;

typedef long long int lli;

void clearBits(int n, int i){
	int mask = (-1 << i);
	cout << (n&mask) << endl;
}

void clearItoJ(int n, int i, int j){

	// 31 = 1 1 1 1 1
	// mask1 = 1 1 1 1 1 1 0 0 0 0   upto postion 3
	// mask2 = 0 0 0 0 0 0 0 0 0 1   
	// mask = mask1 | mask2 = 1 1 1 1 1 1 0 0 0 1
	
	int mask1 = (-1 << j+1);
	int mask2 = ~(-1 << i);

	int mask = mask1 | mask2;
	cout << (n & mask) << endl;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	int i; cin >> i;

	clearBits(t, i);

	int j;
	cin >> t >> i >> j;

	clearItoJ(t, i, j);
}