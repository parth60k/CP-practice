#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        long long n;
        cin>>n;
        if (n % 2 != 0 || n < 4)
            cout << -1 << '
';
        else
            cout << (n + 5) / 6 << " " << n / 4 << '
';
        
    }
    
    return 0;
}