#include <bits/stdc++.h>
using namespace std;

int tower_defense(vector<pair<int, int>> &towers){

    
    int n = towers.size();
}

int main(){

    int t; cin >> t;
    while(t--){
        int width, height; cin >> width >> height;
        int n; cin >> n;

        vector<pair<int, int>> towers;
        for(int i=0; i<n; i++){
            int x, y; cin >> x >> y;
            towers.push_back(make_pair(x, y));
        }

        // cout << tower_defense() << endl;
    } 

}