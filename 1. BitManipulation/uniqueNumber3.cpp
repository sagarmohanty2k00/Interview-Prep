
// The Question is to detect one unique number which is occuring once where as others are occuring 3 times 
// The concept is when a number is occuring 3 times then the set bits will also occur 3 times and unique number is also having the set bit at that position then the occuring will be 3n + 1 times so we do a modulo with 3


#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[64];
	std::vector<int> nums;
	for(int i=0; i<64; i++){
		arr[i] = 0;
	}
	while(n--){
		int v; cin >> v;
		nums.push_back(v);
	}

	for(auto x : nums){
		int v = x;
		int mask = 1;
		int i = 63;
		while(v > 0){
			arr[i] += (v&mask);
			v = v >> 1;
			i--;
		}
	}

	int sum = 0;
	for(int i=63; i>=0; i--){
		int p = arr[i]%3;

		if(p == 1)
			sum += pow(2, 63-i);
	}


	cout << sum;
}



