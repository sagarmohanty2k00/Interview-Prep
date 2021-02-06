
// Holiday Accomodation
#include <bits/stdc++.h>
using namespace std;

class Graph{
	map<int, list<int>> l;

public:
	void addEdge(int a, int b, bool directed = false){
		l[a].push_back(b);
		if(!directed){
			l[b].push_back(a);
		}
	}

	bool detect_cycle_helper(map<int, bool> &visited, int parent, int node){
		visited[node] = true;
		for(auto x : l[node]){
			if(x == parent){
				continue;
			}
			if(parent != -1 and visited[x]){
				return true;
			}
			else{
				if(detect_cycle_helper(visited, node, x)){
					return true;
				}
				else{
					continue;
				}
			}
		}
	}

	bool detect_cycle(){
		map<int, bool> visited;
		for(auto x:l){
			for(int y : l[x.first]){
				visited[y] = false;
			}
		}

		return detect_cycle_helper(visited, -1, 0);
	}
};

int main () {  
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Graph g;
	int n, a, b;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> a >> b;
		g.addEdge(a, b);
	}

	if(g.detect_cycle()){
		cout << "Found Cycle." << endl;
	}
	else{
		cout << "Cycle not Found." << endl;
	}
}