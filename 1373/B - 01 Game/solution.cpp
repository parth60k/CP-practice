#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zeros=count(s.begin(),s.end(),'0');
        int ones=count(s.begin(),s.end(),'1');
        
        int mov=min(zeros,ones);
        
        if(mov%2) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
        
        
    }
    
    return 0;
}