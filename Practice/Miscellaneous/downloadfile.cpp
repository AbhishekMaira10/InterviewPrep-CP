#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,T,t;
	cin>>T;
	int value=0;
	while(T--)
	{
		cin>>n>>k;
		int t[n],d[n];
		for(i=0;i<n;i++)
		{
			cin>>t[i]>>d[i];
		}
		int sum=t[0],sum_1=d[0];
		for(i=0;i<n;i++)
{

		if(sum-k==0)
	{
		if(i+1<n)
		{
		
		for(j=i+1;j<n;j++)
		{
			value=value+t[j]*d[j];
			
		}
		cout<<value<<endl;
		goto label;
	}
	else
	cout<<0<<endl;
}

		else if(sum-k>=1)
		{
			sum=sum-k;
			value=value+sum*sum_1;
			for(j=i+1;j<n;j++)
			{
				value=value+t[j]*d[j];
			}
			cout<<value<<endl;
			goto label;
		}
		else
		{
		
			if(i+1<n)
			{
				int x=t[i]+t[i+1];
				sum=x;
				sum_1=d[i+1];
			}
			
		}
}
	label:;	
	value=0;
	
	}
	return 0;
}
