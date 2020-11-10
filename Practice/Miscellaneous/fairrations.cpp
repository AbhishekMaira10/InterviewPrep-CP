#include<iostream>
using namespace std;
int main()
{
	int i,j,n,count=0,count1=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			if(a[i]%2!=0)
			{
				a[i]++;
				a[i+1]++;
			    count++;
			}

	}
		else if(i!=0)
		{
			if(a[i]%2!=0)
			{
				if(a[i-1]%2==0&&i+1<n)
				{
					a[i]++;
					a[i+1]++;
					count++;
					goto label;
				}
				else if(i+1<n&&a[i+1]%2==0)
				{
					a[i]++;
					a[i-1]++;
					count++;
					goto label;
				}
			
			}
			
		}		
		label:;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count1++;
		}
	}
	if(count1==n)
	{
		cout<<2*count<<endl;
	}
	else
	cout<<"NO"<<endl;

	return 0;
}
