#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long int lli;

void replacePi(char exp[], int i){
	// Base Case
	if(exp[i] == '\0' or exp[i+1] == '\0'){
		return ;
	}

	if(exp[i] == 'p' and exp[i+1] == 'i'){
		int j = i+2;
		while(exp[j] != '\0'){
			j++;
		}

		exp[j+2] = '\0';
		while(j>i+2){
			j--;
			exp[j+2] = exp[j];
		}

		exp[i] = '3';
		exp[i+1] = '.';
		exp[i+2] = '1';
		exp[i+3] = '4';
		replacePi(exp, i+4);

	}
	else{
		replacePi(exp, i+1);	
	}

	return ;

}


// driver code
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char exp[100]; cin >> exp;
	replacePi(exp, 0);
	int i = 0;
	while(exp[i] != '\0'){
		cout << exp[i];
		i++;
	}

}



