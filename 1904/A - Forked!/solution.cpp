#include<bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        
        set<pair<int,int>> kingHits,queenHits;
        for(int j=0;j<4;j++){
            
            kingHits.insert({xk + dx[j] * a, yk + dy[j] * b});
			kingHits.insert({xk + dx[j] * b, yk + dy[j] * a});
 
			// Calculate positions attacked by the knight when placed to attack the queen
			queenHits.insert({xq + dx[j] * a, yq + dy[j] * b});
			queenHits.insert({xq + dx[j] * b, yq + dy[j] * a});
        }
        int ans=0;
        
        for(auto position: kingHits){
            if(queenHits.find(position)!=queenHits.end()) ans++;
        }
        
        
        cout<<ans<<endl;
        
        
        
    }
    
    
    return 0;
}