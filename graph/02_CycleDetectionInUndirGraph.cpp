#include <iostream>
#include <list>
#include <vector>
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
        l[v].push_back(u);
    }

    bool isCycleUndirDFS(int src,int parent,vector<bool>&visited){
        visited[src]=true;
        list<int> neighbours=l[src];

        for(int v: neighbours){
            if(!visited[v]){
                if(isCycleUndirDFS(v,src,visited))  return true;
            }else if(v!=parent) return true;
        }
        return false;
    }

    bool isCycleUndirBFS(int src,vector<bool>&visited){
        queue<pair<int,int>> q;
        q.push({src,-1});
        visited[src]=true;

        while(!q.empty()){
            int u=q.front().first;
            int parent=q.front().second;
            q.pop();

            list<int> neighbours=l[u];
            for(int v: neighbours){
                if(!visited[v]){
                    q.push({v,u});
                    visited[v]=true;
                }   else if(v!=parent) return true;
            }
        }
        return false;
    }

    bool isCycle(){
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(isCycleUndirBFS(i,visited)) return true;
            }
        }        return false;
    }
};
int main() {
    Graph g(5);
    g.addEdge(0,1);
    // g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

    if(g.isCycle()) cout<<"Graph has a cycle"<<endl;
    else cout<<"Graph does not have a cycle"<<endl;
    return 0;
}