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
        int cnt=0,maxCnt=0;;
        for(int i=0;i<n;i++){
            if(arr[i]==1) cnt=0;
            else {
                cnt++;
                maxCnt=max(maxCnt,cnt);
            }
        }
        cout<<maxCnt<<endl;
        
        
    }
    
    
    return 0;
}