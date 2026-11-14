#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n, k;
        cin >> n >> k;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            if (i % (k + 1) == 0)
                sum += a;
        }
        cout << (sum % 2 ? "Alice" : "Bob") << endl;
    }
}