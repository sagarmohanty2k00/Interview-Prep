#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long int lli;

int stringToDig(char a){
	switch(a){
		case '0' : return 0; 
		case '1' : return 1; 
		case '2' : return 2; 
		case '3' : return 3; 
		case '4' : return 4; 
		case '5' : return 5; 
		case '6' : return 6; 
		case '7' : return 7; 
		case '8' : return 8; 
		case '9' : return 9; 
	}

	return -1;
}
int stringToInt(string num, int number, int i){
	
	if(i == -1){
		return 0;
	}


	number = stringToInt(num, number, i-1)*10 + stringToDig(num[i]);


	return number;

}

// driver code
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string num; cin >> num;
	cout << stringToInt(num, 0, num.size() - 1);

}

