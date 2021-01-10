#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

void decimalToBinary(int n){
	int arr[64];
	for(int i=0;i<64;i++){
		arr[i] = 0;
	}
	int i = 63;
	while(n>0){
		arr[i] = n&1;
		i--;
		n = n>>1;
	}

	for(int j=i+1;j<64;j++){
		cout << arr[j];
	}

	cout << endl;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	decimalToBinary(n);
}



