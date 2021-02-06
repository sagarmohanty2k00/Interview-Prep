https://codeforces.com/contest/1481/problem/B

#include <bits/stdc++.h>
using namespace std;


int u=0, d=0, l=0, r=0;
void calculate(int *x, int *y, char direction){
    if(direction == 'U'){
        *y = *y + 1;
        u++;
        return;
    }
    if(direction == 'D'){
        *y = *y - 1;
        d++;
        return;
    }if(direction == 'R'){
        *x = *x + 1;
        r++;
        return;
    }if(direction == 'L'){
        *x = *x - 1;
        l++;
        return;
    }
}

bool solve(string s, int x, int y){

    u=0;
    d=0;
    l=0;
    r=0;

    int x1 = 0, y1 = 0;
    for(auto x : s){
        calculate(&x1, &y1, x);
    }

    if(x1 == x and y1 == y){
        return true;
    }
    // else if( (x1 > x and l<(x1-x))
    //     or (x1 < x) and (r<(x-x1))
    //     or (y1 < y) and (d<(y1-y))
    //     or (y1 > y) and (u<(y-y1))
    //     ){
    //     return false;
    // }

    bool flag1=false,flag2=false;
    if(x>0)
    {
        if(r>=x)
            flag1=true;
    }
    else
    {
        if(l>=abs(x))
            flag1=true;
    }
    if(y>0)
    {
        if(u>=y)
            flag2=true;
    }
    else
    {
        if(d>=abs(y))
            flag2=true;
    }

    if(flag1&&flag2)
        return true;
    else
        return false;
}


int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int t; cin >> t;
    int x, y;
    string s;
    while(t--){
        cin >> x >> y;
        cin >> s;

        if(solve(s, x, y)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}

