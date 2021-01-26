#include <bits/stdc++.h>
using namespace std;

class Graph{
    map<int, list<int>> l;

public:
    Graph(){}
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(int source){
        map<int, bool> visited;
        queue<int> q;

        q.push(source);
        visited[source] = true;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for(int x : l[node]){
                if(!visited[x]){
                    q.push(x);
                    visited[x] = true;
                }
            }

            cout << node << " ---> ";
        }cout << endl;
        
    }
};

int main(){
    Graph g;

    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(0, 1);
    g.addEdge(3, 4);
    g.addEdge(5, 4);
    g.addEdge(0, 3);

    g.bfs(0);
}