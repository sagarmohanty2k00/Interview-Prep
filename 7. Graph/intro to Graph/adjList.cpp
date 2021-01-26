#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V]; 
    }

    void addEdge(int a, int b){
        l[a].push_back(b);
        l[b].push_back(a);
    }

    void printGraph(){
        for(int i=0; i<V; i++){
            for(auto y : l[i]){
                cout << "edge from " << i << " to " << y << endl; 
            }
        }
    }
};

int main(){
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(2, 3);


    g.printGraph();
}