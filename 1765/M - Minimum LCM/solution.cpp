#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
     cin>>t;
     while(t--){
         long long n;
         cin>>n;
         long long a=1,b=n-1;
         
         for(long long fac=2;fac*fac<=n;fac++){
             if(n%fac==0){
                 a=n/fac;
                 b=n-a;
                 break;
             }
         }
         cout<<a<<" "<<b<<endl;
         
     }
    
    
    
    return 0;
}