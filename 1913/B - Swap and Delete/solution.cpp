#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        string s;
        cin >> s;
 
        long long zeroes = count(s.begin(), s.end(), '0');
        long long ones = count(s.begin(), s.end(), '1');
 
        bool broken = false;
 
        for(int i = 0; i < s.size(); i++){
 
            if(s[i] == '1'){
                if(zeroes > 0)
                    zeroes--;
                else{
                    cout << s.size() - i << endl;
                    broken = true;
                    break;
                }
            }
            else{
                if(ones > 0)
                    ones--;
                else{
                    cout << s.size() - i << endl;
                    broken = true;
                    break;
                }
            }
        }
 
        if(!broken)
            cout << 0 << endl;
    }
 
    return 0;
}