#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a<b) swap(a,b);
        
        if(a==b) cout<<0<<" "<<0<<endl;
        else{
            long long gcd=a-b;
            long long moves=min(b%gcd,gcd-(b%gcd));
            cout<<gcd<<" "<<moves<<endl;
        }
    }
    
    return 0;
}