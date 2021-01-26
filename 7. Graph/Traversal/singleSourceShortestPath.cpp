#include <bits/stdc++.h>
using namespace std;

class Graph{
    map<int, list<int>> l;
public:
    
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(int src){
        
        map<int, int> dist;  // < node_value, distance >
        queue<int> q;

        for(auto node_pair : l){
            int node = node_pair.first;
            dist[node] = INT_MAX;
        }

        q.push(src);
        dist[src] = 0;

        while(!q.empty()){
            
            int node = q.front();
            q.pop();

            for(int x : l[node]){
                if(dist[x] == INT_MAX){
                    q.push(x);
                    dist[x] = dist[node]+1;
                }
            }
            cout << node << " --> " << dist[node] << endl;
        }
    }
};

int main(){
    Graph g;

    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(1, 0);
    g.addEdge(3, 0);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.bfs(0);
}