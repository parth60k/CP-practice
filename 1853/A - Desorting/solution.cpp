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
        int req_oper=INT_MAX;
        
        for(int i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                int diff=arr[i+1]-arr[i];
                int opers=diff/2+1;
                req_oper=min(req_oper,opers);
            }
            else{
                req_oper=0;
            }
        }
        cout<<req_oper<<endl;
        
        
    }
    
    return 0;
}