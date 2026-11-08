#include<bits/stdc++.h>
using namespace std;
int n,a[109],k;
long long C;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %lld %d",&n,&C,&k);
		for(int i = 1; i <= n; i ++){
			scanf("%d",&a[i]);
		}
		sort(a + 1,a + n + 1);
		for(int i = 1; i <= n; i ++){
			if(a[i] > C)
				break;
			int o = min(1ll * k,C - a[i]);
			k -= o;
			C += a[i] + o;
		}
		printf("%lld
",C);
	}
}