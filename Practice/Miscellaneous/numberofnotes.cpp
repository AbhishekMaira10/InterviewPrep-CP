#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,t,count=0,r,k,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		if(n%100==0)
		{
			count=count+n/100;	
		}
		else
		{
			k=n/100;
			count=count+k;
			n=n-k*100;
			if(n%50==0)
			{
				count=count+n/50;
			}
			else
			{
				k=n/50;
				count=count+k;
				n=n-k*50;
					if(n%10==0)
			{
				count=count+n/10;
			}
			else
			{
				k=n/10;
				count=count+k;
				n=n-k*10;
					if(n%5==0)
			{
				count=count+n/5;
			}
			else
			{
				k=n/5;
				count=count+k;
				n=n-k*5;
					if(n%2==0)
			{
				count=count+n/2;
			}
			else
			{
				k=n/2;
				count=count+k;
				n=n-k*2;
					if(n%1==0)
			{
				count=count+n/1;
			}
			else
			{
				k=n/1;
				count=count+k;
				n=n-k*1;
				
			}	
			}
			
			}
			
			}
			
			}	
			}		
		cout<<count<<endl;
		count=0;	
		}

	return 0;
}
