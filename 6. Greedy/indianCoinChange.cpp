#include <bits/stdc++.h>
using namespace std;

int make_change(int *coin, int n, int money){

    int ans  = 0;

    while(money > 0){
        int idx = upper_bound(coin, coin + n, money) - 1 - coin;
        // this function returns an address so -base_addr and this returns position of number just greater than money so -1

        money -= coin[idx];
        ans++;
    }

    return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    int money; cin >> money;

    int coin[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int t = sizeof(coin)/sizeof(int);

    cout << make_change(coin, t, money) << endl;
    return 0;
}