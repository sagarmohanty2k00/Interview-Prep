// Program showing a policy-based data structure. 
#include <ext/pb_ds/assoc_container.hpp> // Common file 
#include <ext/pb_ds/tree_policy.hpp> 
#include <bits/stdc++.h> 
using namespace __gnu_pbds; 
using namespace std; 

// a new data structure defined. Please refer below 
// GNU link : https://goo.gl/WVDL6g 
typedef tree<int, null_type, less<int>, rb_tree_tag, 
			tree_order_statistics_node_update> 
	PBDS; 

// Driver code 
int main() 
{

    int n;cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    PBDS st;
    int invertion_count = 0;
    for(int i=0; i<n; i++){
        invertion_count += st.size() - st.order_of_key(arr[i]);
        st.insert(arr[i]);
    }

    cout << "inversion Count = "<<invertion_count<<endl;

	return 0; 
} 

