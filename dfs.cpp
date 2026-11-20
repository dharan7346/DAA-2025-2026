
#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100];
bool visited[100] = {false};

void DFS(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int x : adj[node]) {
        if (!visited[x]) {
            DFS(x);
        }
    }
}

int main() {
    int n, e;

    cout << "Enter vertices and edges: ";
    cin >> n >> e;

    cout << "Enter edges:\n";

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS Traversal: ";
    DFS(start);

    return 0;
}
