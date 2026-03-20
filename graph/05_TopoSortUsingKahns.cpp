#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
class Graph{
    int V;
    list<int>* l;

public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
    }

    void topoSort(){
        vector<int> indeg(V,0);
        vector<int> res;
        for(int i=0;i<V;i++){
            for(int nbr : l[i]){
                indeg[nbr]++;
            }
        }

        queue<int> q;
        for(int i=0;i<V;i++){
            if(indeg[i]==0) q.push(i);
        }

        while(!q.empty()){
            int u=q.front();
            q.pop();
            res.push_back(u);

            for(int nbr: l[u]){
                indeg[nbr]--;
                if(indeg[nbr]==0) q.push(nbr);
            }
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
    }
};
int main() {
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    cout<<"Topological Sort: ";
    g.topoSort();
    return 0;
}