#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cntOne=0,cntZero=0;
        vector<int> arr(n);
        for(int i =0;i<n;i++) cin>>arr[i];
        
        for(int i =0;i<n;i++) {
            if(arr[i]==1){
                cntOne++;
            }
            else cntZero++;
        }
        
        if(cntOne>=cntZero) cout<<"Bessie"<<endl;
        
        else cout<<"Elsie"<<endl;
    }
    
    
    return 0;
}