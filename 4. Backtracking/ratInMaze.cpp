#include <bits/stdc++.h>
using namespace std;

void ratInMaiz(char maiz[][4], int ans[][4], int i, int j, int x, int y){
    if(i == x and j == y){
        // print the path
        for(int a=0; a<=x; a++){
            for(int b=0; b<=y; b++){
                cout << ans[a][b] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if(i > x or j > y){
        return ;
    }

    // Recursion
    ans[i][j] = 1;
    if(maiz[i][j+1] != 'x'){
        ratInMaiz(maiz, ans, i, j+1, x, y);
    }
    if(maiz[i+1][j] != 'x'){
        ratInMaiz(maiz, ans, i+1, j, x, y);
    }

    // Backtracking
    ans[i][j] = 0;

    return ;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    char maiz[][4] = {
        '1', '1', 'x', '1',
        '1', '1', '1', 'x',
        '1', '1', '1', '1', 
        '1', '1', 'x', '1',
    };

    int x; cin >> x;
    int y; cin >> y;

    int ans[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            ans[i][j] = 0;
        }
    }

    ratInMaiz(&maiz[4], &ans[4], 0, 0, x, y);

}