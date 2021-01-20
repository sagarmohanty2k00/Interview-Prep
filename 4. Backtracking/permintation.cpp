#include <bits/stdc++.h>
using namespace std;

vector<int> permute(vector<int> &vi){
    sort(vi.begin(), vi.end());
    
    return vi;
}

int main(){
    int n; cin >> n;
    vector<int> vi(n);

    for(auto &x:vi){
        cin >> x;
    }

    vi = permute(vi);
    for(auto x:vi){
        cout << x;
    }cout << endl;
}