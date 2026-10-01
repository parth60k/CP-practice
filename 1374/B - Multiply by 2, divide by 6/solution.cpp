#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        long long twos=0,threes=0;
        while(n>0 && n%3==0) {
            threes++;
            n/=3;
        }
        while(n>0 && n%2==0){
            twos++;
            n/=2;
        }
        
        if(n>1 || twos>threes){
            cout<<-1<<endl;
        }
        else cout<<threes+(threes-twos)<<endl;
        
        
        
        
        
    }
    return 0;
}