#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        int and_a=a[0];
        for(int i=1;i<n;i++){
            and_a&=a[i];
        }
        
        cout<<and_a<<endl;
    }
    
    
    
    return 0;
}