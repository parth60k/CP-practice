#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int odd_cnt=0;
        for(int i=0;i<n;i++) {
            if(arr[i]%2!=0){
                odd_cnt++;
            }
        }
        if(odd_cnt%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    
    return 0;
}