#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        
        bool ans=false;
        
        long long na=2*b-c;
        if(na/a>0 && na%a==0) ans=true;
        
        long long nb=(a+c)/2;
        if(nb/b>0 && nb%b==0 && (c-a)%2==0) ans=true;
        
        long long nc=2*b-a;
        if(nc/c>0 && nc%c==0) ans=true;
        
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}