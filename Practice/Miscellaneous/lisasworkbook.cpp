#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k,y=1,count=0,page=1,x,p;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%k==0)
		{
			x=a[i]/k;
		}
		else
		{
		x=(a[i]/k)+1;
	    }
			for(p=page;p<x+page;p++)
			{
				for(j=y;j<=a[i];j++)
				{
					
				if(j==p)
				{
					count++;
				}
				if(j%3==0)
				{
					goto label;
				}
			}
        label:;
        y=j+1;
		}
		page=page+x;
		y=1;	
		}
		cout<<count<<endl;
		return 0;
	}
