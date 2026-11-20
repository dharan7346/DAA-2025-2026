
#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

int parent[100];

int find(int x) {
    if (parent[x] == x)
        return x;

    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    parent[find(a)] = find(b);
}

int main() {
    int n, e;

    cout << "Enter vertices and edges: ";
    cin >> n >> e;

    Edge edges[100];

    cout << "Enter edges (u v weight):\n";

    for (int i = 0; i < e; i++) {
        cin >> edges[i].u
            >> edges[i].v
            >> edges[i].w;
    }

    sort(edges, edges + e,
         [](Edge a, Edge b) {
             return a.w < b.w;
         });

    for (int i = 0; i < n; i++)
        parent[i] = i;

    int total = 0, count = 0;

    cout << "Edges in MST:\n";

    for (int i = 0; i < e; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        if (find(u) != find(v)) {
            cout << u << " - " << v
                 << " : " << w << endl;

            unite(u, v);
            total += w;
            count++;
        }

        if (count == n - 1)
            break;
    }

    if (count != n - 1) {
        cout << "Graph is disconnected";
    } else {
        cout << "Minimum cost = " << total;
    }

    return 0;
}
