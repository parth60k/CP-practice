#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int l, r;
        cin >> l >> r;
 
        if (r < 0 || l > 0) {
            cout << r - l << '
';
        } else {
            int m = min(r, -l);
            cout << max(0, r - l - 2 * m - 1) << '
';
        }
    }
 
    return 0;
}