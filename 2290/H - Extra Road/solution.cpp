#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n;
        cin >> n;
        vector<vector<int>> g(n + 1);
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<int> order = {1}, par(n + 1), sz(n + 1, 1);
        for (int i = 0; i < n; i++)
            for (int y : g[order[i]])
                if (y != par[order[i]]) {
                    par[y] = order[i];
                    order.push_back(y);
                }
        vector<vector<int>> kids(n + 1, vector<int>(3));
        for (int i = n - 1; i > 0; i -= 1) {
            sz[par[order[i]]] += sz[order[i]];
            kids[par[order[i]]].push_back(sz[order[i]]);
        }
        int loss = 0;
        for (int v = 1; v <= n; v++) {
            sort(kids[v].rbegin(), kids[v].rend());
            loss = max(loss, kids[v][v == 1 ? 2 : 1]);
        }
        cout << n - loss << endl;
    }
}