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

    int s, l;
    cin >> s >> l;

    map<int, int> snk, ldr;
    for(int i=0; i<s; i++){
    	int s, e;
    	cin >> s >> e;

    	snk[s] = e;
    }

    for(int i=0; i<l; i++){
    	int s, e;
    	cin >> s >> e;

    	ldr[s] = e;
    }

    for(int i=0; i<37; i++){
    	if(ldr.find(i) != ldr.end()){
    		g.addEdge(i, ldr[i]);
    	}
    	else if(snk.find(i) != snk.end()){
    		g.addEdge(i, snk[i]);
    	}
    	else{
    		for(int j=1; j<=6; j++){
    			if(i+j <= 36){
    				if(ldr.find(i+j) != ldr.end()){
    					g.addEdge(i, ldr[i+j]);
    				}
    				else if(snk.find(i) != snk.end()){
    					g.addEdge(i, snk[i+j]);
    				}
    				else
		    			g.addEdge(i, i+j);
	    		}
    		}
    	}
    }

    g.bfs(0);  
    // We will use BFS to find shortest path from 0 to 36
}