#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N; cin >> N;
    int a, b, c; cin >> a >> b >> c;
    int m = min({a,b,c});
    cout << N-m << endl;
}
 
int main() {
    int T; cin >> T;
    while (T--) {solve();}
}