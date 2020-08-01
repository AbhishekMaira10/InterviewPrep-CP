#include<iostream>
using namespace std;
int main()
{
	int s,t,da[100],dr[100],a,b,m[10],n[10],i,count1=0,count2,j,k;
	cin>>s>>t;
	cin>>a>>b;
	cin>>j>>k;
	for(i=0;i<j;i++)
	{
		cin>>m[i];	
	}
		for(i=0;i<k;i++)
	{
		cin>>n[i];	
	}
		for(i=0;i<j;i++)
	{
		da[i]=a-m[i];	
	}
		for(i=0;i<k;i++)
	{
		dr[i]=b-n[i];	
	}
		for(i=0;i<j;i++)
	{
		if(da[i]>=s&&da[i]<=t)
		{
			count1++;
			}	
	}
		for(i=0;i<k;i++)
	{
		if(dr[i]>=s&&dr[i]<=t)
		{
			count2++;
			}	
	}
	cout<<count1<<count2<<endl;
	return 0;
}
	

	
	
