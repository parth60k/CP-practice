#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long oldSum=0;
        
        for(int i=0;i<n;i++) oldSum+=a[i];
        
        vector<long long> prefixSum(n+1,0);
        for(int i=1;i<=n;i++){
            prefixSum[i]=prefixSum[i-1]+a[i-1];
        }
        
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long sumToRemove=prefixSum[r]-prefixSum[l-1];
            
            long long sumToAdd=(r-l+1)*k;
            
            long long ans=oldSum-sumToRemove+sumToAdd;
            
            if(ans%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
    return 0;
}