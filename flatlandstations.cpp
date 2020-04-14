#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,max=-1,n,m;
	int min=100000;
	cin>>n>>m;
	int a[n],b[m],c[n];
	for(i=0;i<n;i++)
	{
		a[i]=i;
	}
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		
		if(a[i]==b[j])
		{
			c[i]=0;
			goto label;
		}
		else
		{
			c[i]=abs(a[i]-b[j]);
			if(c[i]<=min)
			{
				min=c[i];
			   }
			   c[i]=min;   
		}
	}
	label:;
	min=100000;
}
for(i=0;i<n;i++)
{
	if(c[i]>=max)
	{
		max=c[i];
	}
}
cout<<max<<endl;
return 0;
}
