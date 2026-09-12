#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        if (k < n || k > 2 * n - 1) {
            cout << -1 << '
';
            continue;
        }
 
        vector<vector<int>> a(n, vector<int>(n));
        int val = 1;
 
        // Path: (0,0), (0,1), (1,1), (1,2), ...
        int x = k - n;
 
        for (int i = 0; i <= x; i++) {
            a[i][i] = val++;
 
            if (i < x)
                a[i][i + 1] = val++;
        }
 
        // Remaining diagonal cells
        for (int i = x + 1; i < n; i++)
            a[i][i] = val++;
 
        // Fill everything else
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 0)
                    a[i][j] = val++;
            }
        }
 
        for (auto &row : a) {
            for (int v : row)
                cout << v << ' ';
            cout << '
';
        }
    }
}