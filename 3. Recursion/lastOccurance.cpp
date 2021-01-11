#include <iostream>
using namespace std;

typedef long long int lli;

int lastocc(int arr[], int key, int i, int size){
	// Base Case 
	if(i == -1){
		return -1;
	}

	// Recurssive Case
	if(arr[i] == key){
		return i;
	}
	return lastocc(arr, key, i-1, size);
}



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;cin >> x;
	int arr[] = {1, 2, 1, 3, 5, 7 ,2, 6 ,9, 1 ,3, 9};


	int size = sizeof(arr) / sizeof(int);
	cout << lastocc(arr, x, size-1, size) << endl;

}



