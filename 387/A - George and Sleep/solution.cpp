#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, t;
    cin >> s >> t;
 
    int sh = stoi(s.substr(0, 2));
    int sm = stoi(s.substr(3, 2));
 
    int th = stoi(t.substr(0, 2));
    int tm = stoi(t.substr(3, 2));
 
    int current = sh * 60 + sm;
    int sleep = th * 60 + tm;
 
    int ans = (current - sleep + 1440) % 1440;
 
    int h = ans / 60;
    int m = ans % 60;
 
    cout << setw(2) << setfill('0') << h << ":";
    cout << setw(2) << setfill('0') << m << '
';
 
    return 0;
}