#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int merge(std::vector<int> v,int s,int e){

	int mid = (s+e)/2;
	int i = s;
	int j = (mid+1);
	int k = s;


	int temp[1000000];
	int cnt = 0;

	while(i <= mid and j <= e){
		if(v[i] <= v[j]){
			temp[k] = v[i];
			k++;
			i++;
		}
		else{
			temp[k++] = v[j++];
			cnt++;
		}
	}


	return cnt;

}


int inversionCount(vector<int> v,int s,int e){
	if(s >= e){
		return 0;
	}

	int mid = ( s + e )/ 2;
	int x = inversionCount(v, s, mid);
	int y = inversionCount(v, mid+1, e);
	int z = merge(v, s, e);


	return x+y+z;
}

// driver code
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<int> v;
	for(int i=0; i<n; i++){
		int ele;
		cin >> ele;


		v.push_back(ele);
	}


	cout << inversionCount(v, 0, n) << endl;
}



