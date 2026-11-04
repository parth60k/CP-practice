#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,r,b;
    cin>>n>>r>>b;
    int lred=r/(b+1);
    int extrared=r%(b+1);
    string s;
    for(int times=1;times<=b+1;times++){
        for(int i=0;i<lred;i++){
            s+='R';
        }
        if(extrared>0){
            s+='R';
            extrared--;
        }
        if(times!=b+1){
            s+='B';
        }
    }
    cout<<s<<endl;
    
    
    }
    return 0;
}