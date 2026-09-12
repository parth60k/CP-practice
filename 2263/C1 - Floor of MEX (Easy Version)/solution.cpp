#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<int> a(n + 1);
        for (int k = 1; k <= n; k++)
            cin >> a[k];
 
        // Mark forbidden positions.
        vector<int> diff(n + 2);
 
        for (int k = 1; k <= n; k++) {
            int l = a[k] * k;
            int r = min(n - 1, (a[k] + 1) * k - 1);
 
            if (l < n) {
                diff[l]++;
                diff[r + 1]--;
            }
        }
 
        vector<int> bad(n);
        for (int i = 0, cur = 0; i < n; i++) {
            cur += diff[i];
            bad[i] = (cur > 0);
        }
 
        // Required intervals grouped by right endpoint.
        vector<vector<int>> req(n);
 
        for (int k = 1; k <= n; k++) {
            for (int j = 0; j < a[k]; j++) {
                int l = j * k;
                if (l >= n) break;
 
                int r = min(n - 1, (j + 1) * k - 1);
                req[r].push_back(l);
            }
        }
 
        // All positions which are allowed to be in B.
        set<int> allowed;
 
        for (int i = 0; i < n; i++)
            if (!bad[i])
                allowed.insert(i);
 
        vector<int> B;
        int last = -1;
 
        // Greedy: process intervals by increasing right endpoint.
        for (int r = 0; r < n; r++) {
            for (int l : req[r]) {
 
                // Already hit by the previously chosen point.
                if (last >= l)
                    continue;
 
                // Rightmost allowed point <= r.
                auto it = allowed.upper_bound(r);
 
                // Input guarantees a solution.
                --it;
 
                int x = *it;
 
                B.push_back(x);
                last = x;
 
                allowed.erase(it);
            }
        }
 
        cout << B.size() << '
';
 
        for (int x : B)
            cout << x << ' ';
 
        cout << '
';
    }
}