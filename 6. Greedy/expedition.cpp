// link - https://www.spoj.com/problems/EXPEDI/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t;
    while(t--){

        int n; cin >> n;
        vector<pair<int, int>> stops;
        int distanceToTown, fule;
        for(int i=0; i<n; i++){
            cin >> distanceToTown >> fule;

            stops.push_back(make_pair(distanceToTown, fule));
        }

        cin >> distanceToTown >> fule;
        sort(stops.begin(), stops.end());

        for(int i=0; i<n; i++){
            cout << stops[i].first << stops[i].second << endl;
        }
    }
}