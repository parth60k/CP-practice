#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char color;
        cin>>color;
        string s;
        cin>>s;
        s+=s;
        n*=2;
        
        int index=-1;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g') index=i;
            if(s[i]==color){
                int diff=index-i;
                ans=max(ans,diff);
            }
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}