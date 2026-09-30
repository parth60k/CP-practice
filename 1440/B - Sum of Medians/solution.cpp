#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n*k);
        for(int i=0;i<n*k;i++) cin>>a[i];
        long long sum=0;
        int p=n*k;
        while(k--){
            p-=(n/2+1);
            sum+=a[p];
        }
        cout<<sum<<endl;
        
    }
    return 0;
}