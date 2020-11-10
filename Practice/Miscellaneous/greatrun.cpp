#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,t,n,k,p,max=0,sum=0;
	cin>>t;
	for(p=0;p<t;p++)
	{
		cin>>n>>k;
			int a[n],sumarr[100]={0};
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<=n-k;i++)
		{
			for(j=i;j<i+k;j++)
			{
				sum=sum+a[j];
			}
			sumarr[i]=sum;
			sum=0;
		}
		for(i=0;i<100;i++)
		{
			if(sumarr[i]>=max)
			{
				max=sumarr[i];
			}
		}
	cout<<max<<endl;
	max=0;		
	}
	return 0;
}
