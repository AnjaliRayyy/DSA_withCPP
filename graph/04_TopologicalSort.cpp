#include <iostream>
#include <list>
#include <vector>
#include <stack>
using namespace std;
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    // Directed Graph
    void addEgde(int u, int v)
    {
        l[u].push_back(v);
    }

    void topoSortViaDFS(int curr, vector<bool> &visited, stack<int> &s)
    {
        visited[curr] = true;
        list<int> neighbours = l[curr];

        for (int v : neighbours)
        {
            if (!visited[v])
            {
                topoSortViaDFS(v, visited, s);
            }
        }
        s.push(curr);
    }
    void topoSort()
    {
        vector<bool> visited(V, false);
        stack<int> s;

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                topoSortViaDFS(i, visited, s);
            }
        }

        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
    }
};

int main()
{
    Graph g(6);
    g.addEgde(5, 2);
    g.addEgde(5, 0);
    g.addEgde(4, 0);
    g.addEgde(4, 1);
    g.addEgde(2, 3);
    g.addEgde(3, 1);
    g.topoSort();
    return 0;
}