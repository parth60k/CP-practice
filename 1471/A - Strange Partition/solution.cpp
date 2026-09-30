#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n);
        for(int i =0;i<n;i++) cin>>a[i];
        long long mini=0,maxi=0;
        for(int i =0;i<n;i++){
            mini+=a[i];
            maxi+=ceil(a[i]*1.0/x);
        }
        mini=ceil(mini*1.0/x);
        cout<<mini<<" "<<maxi<<endl;
        
        
        
    }
    return 0;
}