#include <bits/stdc++.h>
using namespace std;

int balance_loads(vector<int> processor, int avg_load, int n){
    
    int i = 0;
    int available_load = 0;
    int iterations_to_balance_loads = 0;

    while (i < n)
    {
        available_load += processor[i];
        int required_load = avg_load * (i+1);
        
        int current_iterations_required = (required_load > available_load) ? (required_load - available_load) : (available_load - required_load);

        iterations_to_balance_loads = max(current_iterations_required, iterations_to_balance_loads);
 
        i++;
    }

    return iterations_to_balance_loads;
    
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> processors;
        int total_load = 0;
        // processors.push_back(0);
        for(int i=0; i<n; i++){
            int v; cin >> v;
            total_load += v;
            processors.push_back(v);
        }

        // Solution
        if(total_load % n != 0){
            cout << -1 << endl;
        }
        else{
            cout << balance_loads(processors, total_load/n, n) << endl;
        }
    }
}