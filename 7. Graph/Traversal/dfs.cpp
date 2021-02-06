#include <bits/stdc++.h>
using namespace std;

class Graph{
    map<int, list<int>> l;
    int v;

public:
    map<int, bool> visited;
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void dfs(int head){
        cout << head << " --> ";
        visited[head] = true;

        for(auto x : l[head]){
            if(!visited[x])
                dfs(x);
        }

        return;
    }
};

int main(){
    Graph g;

    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(4, 3);
    g.addEdge(4, 5);


    for(int i=0; i<5; i++){
        g.visited[i] = false;
    }

    g.dfs(0);
}