// Dijkstra Algorithms
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <queue>

using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u, int v, int w) {
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
}

void printGraph(vector<pair<int,int>> adj[], int V) {
    for (int v = 1; v < V; v++)
    {
        cout << "\nList" << v << "\nHead";
        for (auto x : adj[v])
        {
            cout << " -> " << x.first << " w = " << x.second;
        }
        cout << "\n";
    }
}

void dijkstra(vector<pair<int,int>> adj[]) {
    int x = 1;
    const int n = 6;
    int distance[n];
    bool processed[n];
    priority_queue<pair<int,int>> q;
    cout << "\nNeighbourhood\n";
    for (int i = 1; i <= n; i++) distance[i] = 99999;
    distance[x] = 0;
    q.push({0, x});
    while (!q.empty())
    {
        int a = q.top().second; q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        cout << "Neighbour of " << a << " are ";
        for (auto u : adj[a])
        {
            int b = u.first, w = u.second;
            cout << " " << b;
            if (distance[a] + w < distance[b]) {
                distance[b] = distance[a] + w;
                q.push({distance[b], b});
            }
        }
        cout << "\n";
    }
    cout << "\nDijkstra Algorithm: Finding Minimum Distance from node 1\n";
    for (int i = x; i < n; i++) {
        cout << "Minimum distance from node " << x << " to node " << i << " is " << distance[i] << "\n";
    }
}

int main() {
    int V = 5+1;
    vector<pair<int,int>> adj[V];
    addEdge(adj, 1, 2, 5);
    addEdge(adj, 1, 4, 9);
    addEdge(adj, 1, 5, 1);
    addEdge(adj, 2, 3, 2);
    addEdge(adj, 3, 4, 6);
    addEdge(adj, 4, 5, 2);
    dijkstra(adj);
    cout << "\n";
    return 0;
}