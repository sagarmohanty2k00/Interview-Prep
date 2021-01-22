// https://www.spoj.com/problems/BAISED/
#include <bits/stdc++.h>
using namespace std;

int biasedStanding(int arr[], int n){
    int team[n+1];
    for(int i=0; i<=n; i++){
        team[i] = 0;
    }
    for(int i=0; i<n; i++){
        team[arr[i]]++;
    }


    int rank = 1;
    int i = 1;
    int badness = 0;
    while(rank<=n){
        while(team[i] == 0){
            i++;
        }
        team[i]--;
        badness += (i > rank) ? (i - rank) : (rank - i);

        // cout << badness << " i = " << i << "  rank = " << rank << endl;
        rank++;
    }

    return badness;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t;
    while (t--)
    {
        int n;cin >> n;
        int arr[n];

        for(int i=0; i<n; i++){
            string s; cin >> s;
            cin >> arr[i];
        }

        cout << biasedStanding(arr, n);
    }
    
}