#include<bits/stdc++.h>
using namespace std;
#define MAX 10001
int main(){
	int t;
	long long int n1,n2,m;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld%lld",&n1,&n2,&m);
		if(m*(m+1)/2>min(n1,n2))	printf("%lld\n",n1+n2-2*min(n1,n2));
		else						printf("%lld\n",n1+n2-m*(m+1));
	}
	return 0;
}
