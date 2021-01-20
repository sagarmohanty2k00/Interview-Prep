// Lazy Propagation in Segment Tree
// - Optimization to do "Range Updates" in Segment Tree in O(logN) time
// - Idea : Postpone the updates to descendants of a node untill the descendants themselves need to be accessed.


// Range Based Queries can be solved with segment tree

// Build the tree
// We can use Array to build the tree

#include <bits/stdc++.h>
using namespace std;

#define default INT_MAX;

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

int query(int qs, int qe, int s, int e, int* tree, int index){

    // Base Case
    // in case of complete overlap return tree[l+1]
    if(qs <= s and qe >= e){
        return tree[index];
    }

    // in case of no overlap return default
    if(qe < s or qs > e){
        return INT_MAX;
    }

    // in case of partial overlap
    // Recursive case
    int mid = (s + e)/2;

    int left = query(qs, qe, s, mid, tree, 2 * index);
    int right = query(qs, qe, mid+1, e, tree, 2 * index + 1);
    return min(left, right);

}

void update(int idx, int newValue, int s, int e, int *tree, int index){
    // Base Case
    if(idx < s or idx > e){
        return ;
    }

    // Leaf node
    if(e == s){
        tree[index] = newValue;
        return ;
    }

    int mid = (s + e)/2;
    update(idx, newValue, s, mid, tree, index*2);
    update(idx, newValue, mid + 1, e, tree, index*2 + 1);

    tree[index] = min(tree[index*2], tree[index*2 + 1]);
}


// Increament a range of numbers by a given increamenter
void rangeUpdate(int *tree, int qs, int qe, int s, int e, int inc, int index){
    // No Overlap
    if(qs > e || qe < s){
        return ;
    }

    // Leaf Node
    if(e == s){
        tree[index] += inc;
        return;
    }

    // Recursive case
    int mid = (e + s)/2;
    rangeUpdate(tree, qs, qe, s, mid, inc, index*2);
    rangeUpdate(tree, qs, qe, mid+1, e, inc, index*2 +1);


    tree[index] = min(tree[index*2], tree[2*index + 1]);
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
    for(int i=1; i<4*n + 1; i++){
        cout << segmentTree[i] << " ";
    }cout << endl;
    cout << "Before updating :- " << query(0, n-1, 0, n-1, segmentTree, 1) << endl;
    // update(3, 5, 0, n-1, segmentTree, 1);
    // cout << "After updating :- " << query(0, n-1, 0, n-1, segmentTree, 1) << endl;

    
    // cout << "\n" << segmentTree[1];

    rangeUpdate(segmentTree, 0, n-1, 0, n-1, 12, 1);
    // cout << "\n" << segmentTree[1];


    for(int i=1; i<4*n + 1; i++){
        cout << segmentTree[i] << " ";
    }cout << endl;
    cout << "\n" << segmentTree[1];

    cout << endl;
}

