#include<iostream>
using namespace std;
int main()
{
int a[100],i,j,n,count=0,d,sum=0;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>a[i];
	}	
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			count++;
		}
		if(count%2==0)
		{
		d=count/2;
	}
	else
	{
		d=count/2+1;
	}
	sum=sum+d;
	count=0;				
	}
}
cout<<sum;
	return 0;
}
