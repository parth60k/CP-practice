#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        
        unordered_set<char> st;
        
        vector<long long> pref(n+1,0);
        vector<long long> suff(n+1,0);
        
        for(int i=1;i<=n;i++){
            st.insert(s[i-1]);
            pref[i]=st.size();
        }
        
        st.clear();
        for(int i=n;i>=1;i--){
            st.insert(s[i-1]);
            suff[i]=st.size();
        }
        
        long long ans=0;
        
        for(long long i=0;i<n;i++)
            ans=max(ans,pref[i]+suff[i+1]);
        cout<<ans<<endl;
        
        
        
    }
    
    
    return 0;
}