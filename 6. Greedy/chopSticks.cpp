// link - https://www.codechef.com/problems/TACHSTCK

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d; 
    cin >> n >> d;
    int l[n];

    for(int i=0; i<n; i++){
        cin >> l[i];
    }

    sort(l, l+n);
    int pairs = 0;
    for(int i=0; i<n-1; i++){
        if(l[i+1] - l[i] <= d){
            pairs++;
            i++;
        }
    }

    cout << pairs << endl;
}