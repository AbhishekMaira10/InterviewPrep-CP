#include<iostream>
using namespace std;
int main()
{
	int x,n,m,i,j;
	cin>>x>>n>>m;
	int max=0;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<m;i++)
		cin>>b[i];
		for(i=0;i<n;i++)
	{  
		for(j=0;j<m;j++)
	{
		if(a[i]+b[j]<x)
		{
			if(max<a[i]+b[j])
				max=a[i]+b[j];
		}
	
		
	}
		
	}
			for(i=0;i<n;i++)
	{
			for(j=0;j<m;j++)
	{
			if(a[i]+b[j]>x&&max==0)
		{
			cout<<-1<<endl;
			break;
		}
		else
		{
		
			cout<<max<<endl;
			break;
			
		}
	
	}
	break;
		
	}

		return 0;
}
	
