// Range Based Queries can be solved with segment tree

// Build the tree
// We can use Array to build the tree

#include <bits/stdc++.h>
using namespace std;

// typedef int n; cin >> n; input;

void buildTree(int *a, int s, int e, int *tree, int index){
    // Base case
    if(s == e){
        tree[index] = a[s];
        return;
    }

    // Recursive case
    int mid = (s+e)/2;

    buildTree(a, s, mid, tree, 2*index);
    buildTree(a, mid+1, e, tree, 2*index + 1);
    
    tree[index] = min(tree[2*index], tree[2*index+1]);
    return;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    int *segmentTree = new int[4 * n + 1];
    
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }


    buildTree(a, 0, n-1, segmentTree, 1);
    for(int i=1; i<4*n +1; i++){
        cout << segmentTree[i] << " ";
    }
    cout << endl;
}

