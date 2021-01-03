// Program to find ith bit of a number from the right side
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


void getBit(int n, int i){
	int mask = (1<<i);

	if(n & mask){
		cout << "ith bit is a '1'" << endl;
	}
	else{
		cout << "ith bit is a '0'" << endl;
	}
}

int setBit(int n, int i){
	int mask = (1 << i);

	int Ans = n|mask;


	return Ans;
}

int clearBit(int n, int i){
	int mask = (1 << i);
	mask = ~mask;


	return (n & mask);
}

int updateBit(int n, int i, int v){
	if(v == 1){
		n = setBit(n, i);
	}
	else{
		n = clearBit(n, i);
	}


	cout << "Value after update = " << n << endl;
	return n;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int i; cin >> i;

	getBit(n, i);

	cin >> i;
	n = setBit(n, i);
	cout << "Ans = " << n << endl;

	cin >> i;
	cout << "Answer after clearing ith bit is = " << clearBit(n, i) << endl;
	

	int v; cin >> i; cin >> v;
	n = updateBit(n, i, v);

	cin >> i; cin >> v; 
	n = updateBit(n, i, v);

	cin >> i; cin >> v; 
	n = updateBit(n, i, v);

	n = updateBit(5, 2, 0);
	n = updateBit(n, 3, 1);
}