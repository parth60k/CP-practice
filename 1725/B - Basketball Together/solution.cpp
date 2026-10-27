#include<bits/stdc++.h>
using namespace std;
int main(){
        long long N,D;
        cin>>N>>D;
        vector<long long> pow(N);
        for(int i=0;i<N;i++) cin>>pow[i];
        long long l=-1,r=N-1;
        int teams=0,teamSize=1;
        sort(pow.begin(),pow.end());
        while(l<r){
            if(pow[r]*teamSize<=D && l<r){
                l++;
                teamSize++;
            }
            else{
                teams++;
                r--;
                teamSize=1;
            }
        }
        cout<<teams<<endl;
    
    
    
    
    return 0;
}