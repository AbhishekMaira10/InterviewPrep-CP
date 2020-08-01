#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,t,k,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n],sum=0,sum1=0;
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		sum+=a[i];
		}
		sort(a,a+n);
		if(k>n-k)
		{	
		k=n-k;
		}
		for(i=0;i<k;i++)
		{
			sum1+=a[i];
		}
		cout<<sum-(2*sum1)<<endl;
	}
	return 0;
}
