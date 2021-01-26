#include <bits/stdc++.h>
using namespace std;

class Graph{
    private:
    unordered_map<string, list<pair<string, int>>> l;
    
    public:
    void addEdge(string x, string y, bool bidiractional, int wait){
        l[x].push_back(make_pair(y, wait));
        if(bidiractional){
            l[y].push_back(make_pair(y, wait));
        }
    }

    void printList(){
        for(auto key:l){
            string city = key.first;
            list<pair<string, int>> nbrs = key.second;

            for(auto nbr : nbrs){
                cout << nbr.first << "-->" << nbr.second << endl;
            }
        }
    }
};


int main(){
    Graph g;

    g.addEdge("A", "B", true, 20);
    g.addEdge("A", "C", true, 20);
    g.addEdge("B", "C", true, 20);
    g.addEdge("C", "D", false, 20);

    g.printList();
}