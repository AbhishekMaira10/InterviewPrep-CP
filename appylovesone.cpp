#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,nq,i,max=0,count=1;
	cin>>n>>nq>>k;
	int a[n+1],b[n+1];
	for	(i=1;i<n+1;i++)
	{
		cin>>a[i];
	}
	while(nq--)
	{
		char q;
		cin>>q;
		if(q=='!')
		{
			b[1]=a[n];
			for(i=2;i<n+1;i++)
			{
				b[i]=a[i-1];
			}
			for(i=1;i<n+1;i++)
			{
				a[i]=b[i];
			}
		}
		else if(q=='?')
	{
		for(i=1;i<n+1;i++)
		{
			if(a[i]==1&&a[i+1]==1)
			{
				count++;
			}
			else 
			{
				if(count>max)
				{
					max=count;
				}
				count=1;
			}
		}
		if(max<=k)
		{
			cout<<max<<endl;
		}
		else
		cout<<k<<endl;
		count=1;
		max=0;		
	}	
	}
	return 0;
}
