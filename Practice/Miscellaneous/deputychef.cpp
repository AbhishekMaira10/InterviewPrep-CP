#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,i,j,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n],count=0,max=0;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				sum=a[n-1]+a[1];
				if(sum<b[0])
				{
					count++;
					if(b[0]>=max)
					max=b[0];
				}
			}
			else if(i==n-1)
			{
				sum=a[n-2]+a[0];
				if(sum<b[n-1])
				{
					count++;
					if(b[n-1]>=max)
					max=b[n-1];
				}
			}
			else
			{
				sum=a[i-1]+a[i+1];
				if(sum<b[i])
				{
					count++;
					if(b[i]>=max)
					max=b[i];
				}
			}
		}
		if(count==0)
		cout<<"-1"<<endl;
		else
		cout<<max<<endl;
	}
}



