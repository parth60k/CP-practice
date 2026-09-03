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
        int pos=0,neg=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) pos++;
            else neg++;
        }
        int oper=0;
        while(pos<neg || neg%2!=0){
            oper++;
            pos++;
            neg--;
        }
        cout<<oper<<endl;
    }
    
    return 0;
}