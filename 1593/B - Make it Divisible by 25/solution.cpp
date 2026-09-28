#include<bits/stdc++.h>
using namespace std;
int min_op(string n,string pos_vals){
    int op=0;
    int check=pos_vals.size()-1;
    
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==pos_vals[check]){
            check--;
            
            if(check<0) break;
        }
        else{
            op++;
        }
    }
    
    if(check>=0) op=INT_MAX;
    
    return op;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        
        vector<string> pos_vals={"00","25","50","75"};
        int ans=INT_MAX;
        
        for(auto pos_val:pos_vals){
            ans=min(ans,min_op(n,pos_val));
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}