#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        
        long long ans=INT_MAX,evenCnt=0;
        for(long long i=0;i<n;i++){
            if(a[i]%2==0) evenCnt++;
            if(a[i]%k==0) ans=0;
            ans=min(ans,(k-a[i]%k));
        }
        if(k==4){
            if(evenCnt>=2) ans=min(ans,0LL);
            else if(evenCnt==1) ans=min(ans,1LL);
            else ans=min(ans,2LL);
        }
        cout<<ans<<endl;
        
        
    }
    
    return 0;
}