#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


int main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n; cin >> n;
	int arr[n];
	int _xor = 0;


	for(int i=0;i<n;i++){
		int v; cin >> v;
		arr[i] = v;
		_xor = _xor^v;
	}


	int temp = _xor;
	int pos = 0;
	while(temp > 0){
		pos++;
		temp = temp >> 1;
	}


	int mask = (1 << pos-1);
	for(int i=0;i<n;i++){
		if((arr[i]&mask ) > 0){
			temp = temp ^ arr[i];
		}
	}

	int x = temp;
	int y = _xor ^ temp;


	cout << x << " " << y <<endl;
}



