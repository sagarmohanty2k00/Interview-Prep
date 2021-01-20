#include <bits/stdc++.h>
using namespace std;


bool isValid(int** arr, int i, int j, int n){
    if(i < n && j < n && arr[i][j] == 1){
        return true;
    }

    return false;
}

bool ratInMaiz(int **maiz, int **ans, int i, int j, int n){

    if(i == n-1 and j == n-1){
        ans[i][j] = 1;
        return true;
    }

    if(isValid(maiz, i, j, n)){
        ans[i][j] = 1;
        if(ratInMaiz(maiz, ans, i, j+1, n)){
            return true;            
        }
        if(ratInMaiz(maiz,ans, i+1, j, n)){
            return true;
        }
        
        ans[i][j] = 0;
        return false;
    }

    return false;
    
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif
    
    int n; cin >> n;

    // Dynamic Allocation
    int **ans = new int*[n];
    int **maiz = new int*[n];

    for(int i=0; i<n; i++){
        ans[i] = new int[n];
        maiz[i] = new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> maiz[i][j];
            ans[i][j] = 0;
        }
    }

    if(ratInMaiz(maiz, ans, 0, 0, n)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << ans[i][j] << " ";
            }cout << endl;
        }

        return 0;
    }

    cout << " No Solution " << endl;
    return 0;

}