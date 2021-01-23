#include <bits/stdc++.h>
using namespace std;

int tower_defense(vector<int> _x, vector<int> _y, int width, int height){
    int n = _x.size();
    int deltaX[n+1], deltaY[n+1];

    // deltaX[i] = _x[0] - 1;
    for(int i=0; i<n; i++){
        if(i == 0){
            deltaX[i] = _x[i] - 1;
        }
        else
            deltaX[i] = _x[i] - _x[i-1] - 1;

        if(i == 0){
            deltaY[i] = _y[i] - 1;
        }
        else
            deltaY[i] = _y[i] - _y[i-1] - 1;
    }

    deltaX[n] = width - _x[n-1];
    deltaY[n] = height - _y[n-1];

    int area = 0;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            int currentArea = deltaX[i] * deltaY[j];

            area = max(area, currentArea);
        }
    }

    return area;

}

int main(){

    int t; cin >> t;
    while(t--){
        int width, height; 
        cin >> width >> height;
        int n; cin >> n;

        vector<int> _x;
        vector<int> _y;
        for(int i=0; i<n; i++){
            int x, y; cin >> x >> y;
            _x.push_back(x);
            _y.push_back(y);
        }

        sort(_x.begin(), _x.end());
        sort(_y.begin(), _y.end());

        cout << tower_defense(_x, _y, width, height) << endl;
    } 

}