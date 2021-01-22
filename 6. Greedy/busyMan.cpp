#include <bits/stdc++.h>
using namespace std;

int busy_man(){

    int ans  = 0;

    

    return ans;
}

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    int t, n, s, e;cin >> t;
    vector<pair<int, int>> v;

    while(t--){

        cin >> n;
        for(int i=0; i< n; i++){
            cin >> s >> e;
            v.push_back(make_pair(s, e));
        }
        sort(v.begin(), v.end(), compare);

        int res = 1;
        int fin = v[0].second;

        for(int i = 1; i < n; i++){
            if(v[i].first >= fin){
                fin = v[i].second;
                res++;
                // cout << fin << " " << v[i].first << " " << v[i].second << endl;
            }
        }
        cout << endl;
        cout << res << endl;
        // for(int i = 0; i < n; i++){
        //     cout << v[i].first << v[i].second << endl;
        // }


        v.clear();
       
    }
}