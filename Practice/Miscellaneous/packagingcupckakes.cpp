#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	long int n,i,j,max=0,max_1=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		i=1;
		while(1)
		{
			if(i>n)
			{
				goto label;
			}
		else if(n%i==0&&max_1==0)
		{
		
			if(i>=max)
			{
				max=i;
			}
		}
		else
		{
			
			j=n%i;
			if(i*j<n)
			{
			j=n-i*j;
			if(i>=max&&j>=max_1)
			{
				max=i;
				max_1=j;
			}
			
		}
		else
		{
			if(i>=max&&j>=max_1)
			{
				max=i;
				max_1=j;
			}
			
		}
		}
	
		i++;
	
	}

	 label:;
	cout<<max<<endl;
	max=0,max_1=0;
	i=1;
	}
	return 0;
}
	
