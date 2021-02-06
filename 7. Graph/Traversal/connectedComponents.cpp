
// Find max Sum
#include <bits/stdc++.h>
using namespace std;


class Graph
{
	std::map<int, list<int>> l;
public:
	Graph(){}
	~Graph(){}


	void addEdge(int a, int b){
		l[a].push_back(b);
		l[b].push_back(a);

		cout << "Edge Added\n";
	}

	void dfs_helper(int node, std::map<int, bool> &visited){
		if(visited[node]){
			return;
		}

		visited[node] = true;
		cout << node << " ";

		for(int a:l[node]){
			if(!visited[a]){
				dfs_helper(a, visited);
			}
		}
	}

	void connectedComponents(){
		int count = 0;

		map<int, bool> visited;
		for(auto i:l){
			// cout << i.first << " ";
			visited[i.first] = false;
		}


		// If node is not visited then
		for(auto p:l){
			int node = p.first;

			if(!visited[node]){
				count++;
				dfs_helper(node, visited);
			}
		}

		cout << "\n" << count << "\n";
	}
	
};

int main () {

	int v; cin >> v;
	int e; cin >> e;

	cout << v << " " << e << endl;

	Graph g;
	
	for (int i = 0; i < e; ++i)
	{
		int a, b;
		cin >> a >> b;

		g.addEdge(a, b);
	}

	g.connectedComponents();
    
}