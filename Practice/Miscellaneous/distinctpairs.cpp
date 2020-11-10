#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,j,k,n,m,count=0;
	cin>>n>>m;
	long long a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	long long x=n+m-1,max=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			k=a[i]+b[j];
			if(k>1000000)
			{
				k=k/10000;
			}
			if(k>=max)
			max=a[i]+b[j];
		}
	}
	cout<<max<<endl;
	long long sum[max+1]={0};
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			k=a[i]+b[j];
			if(k>1000000)
			{
				k=k/10000;
			}
			sum[k]++;
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			k=a[i]+b[j];
			if(k>1000000)
			{
				k=k/10000;
			}
			if(sum[k]==1)
			{
				cout<<i<<" "<<j<<endl;
				count++;
			}
			if(count==x)
			goto label;
		}
	}
		label:;
return 0;
}
