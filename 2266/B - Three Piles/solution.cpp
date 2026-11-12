#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a, b, c; cin >> a >> b >> c;
    cout << max(abs(a-b),(a+c-b)) << endl;
}
 
int main() {
    int T; cin >> T;
    while (T--) {solve();}
}