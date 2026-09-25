#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        
        int ans=0;
        
        for(int i=0;i<n/2;i++){
            int j=n-i-1;
            
            if(s[i]==s[j]) continue;
            
            if(s[i]==c || s[j]==c) ans++;
            else ans+=2;
             
        }
        cout<<ans<<endl;
        
    }
    return 0;
}