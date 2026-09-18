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
        
        int maxi=a[n-1]-a[0];
        
        for(int i=1;i<n;i++){
            maxi=max(maxi,a[i]-a[0]);
        }
        
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,a[n-1]-a[i]);
        }
        
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,a[i]-a[i+1]);
        }
        
        cout<<maxi<<endl;
    }
    
    return 0;
}