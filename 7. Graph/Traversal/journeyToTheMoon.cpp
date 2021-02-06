#include <bits/stdc++.h>
using namespace std;


class Graph{
    map<int, list<int>> l;

    public:
    void addEdge(int a, int b){
        l[a] = l[b];
    }
};