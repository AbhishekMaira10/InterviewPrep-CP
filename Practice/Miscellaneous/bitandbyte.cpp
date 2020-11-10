#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,a[3]={0},at,b,i,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n<=2)
		{
			a[0]=1;
			for(i=0;i<3;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		else if(n>2&&n<=10)
		{
			a[1]=1;
			for(i=0;i<3;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		else if(n>10&&n<=26)
		{
			a[2]=1;
			for(i=0;i<3;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		else if(n>26)
		{
			at=n/26;
			if(n%26==0)
			{
				at=at-1;
			}
			b=n-(at*26);
			c=pow(2,at);
			if(b<=2)
			{
				a[0]=1;
				for(i=0;i<3;i++)
				{
					a[i]=c*a[i];
				}
				for(i=0;i<3;i++)
			{
				cout<<a[i]<<" ";
			}
			}
			if(b>2&&b<=10)
			{
				a[1]=1;
				for(i=0;i<3;i++)
				{
					a[i]=c*a[i];
				}
				for(i=0;i<3;i++)
			{
				cout<<a[i]<<" ";
			}	
			}
			if(b>10&&b<=26)
			{
				a[2]=1;
				for(i=0;i<3;i++)
				{
					a[i]=c*a[i];
				}
				for(i=0;i<3;i++)
			{
				cout<<a[i]<<" ";
			}	
			}
			
		    }
		    for(i=0;i<3;i++)
			{
				a[i]=0;
			}
			cout<<endl;
		
		}
		return 0;
	}
	
	
