#include <iostream>
using namespace std;

typedef long long int lli;

void decrease(int x){
	// Base Case 
	if(x == 0){
		return;
	}

	// Recurssive Case
	cout << x << " ";
	decrease(x-1);
}


void increase(int x){
	// Base Case 
	if(x == 0){
		return;
	}

	// Recurssive Case
	increase(x-1);
	cout << x << " ";
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;cin >> x;

	decrease(x);
	cout << endl;
	increase(x);

}



