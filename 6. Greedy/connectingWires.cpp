#include <bits/stdc++.h>
using namespace std;

int connectingWires(vector<int> black, vector<int> white){
    int length = 0;

    sort(white.begin(), white.end());
    sort(black.begin(), black.end());

    int n = white.size();
    for(int i=0; i<n; i++){
        length += (white[i] > black[i]) ? (white[i] - black[i]) : (black[i] - white[i]);
    }

    return length;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    int t; cin >> t;
    int n, v;

    vector<int> black, white;

    while(t--){

        cin >> n;
        for(int i=0; i<n; i++){
            cin >> v;
            black.push_back(v);
        }
        for(int i=0; i<n; i++){
            cin >> v;
            white.push_back(v);
        }

        cout << connectingWires(black, white)<< endl;

        black.clear();
        white.clear();

    }
}