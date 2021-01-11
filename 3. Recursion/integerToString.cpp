#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

string spelling[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

string numberToSpelling(int num, string number){
	if(num == 0){
		return number;
	}

	number = number + numberToSpelling(num/10, number);
	return (number + " " + spelling[num%10]);
}

// driver code
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int num; cin >> num;
	if(num == 0){
		cout << "zero" << endl;
	}
	else{
		cout << numberToSpelling(num, "");
	}

}



