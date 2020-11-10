#include<iostream>
using namespace std;
int main()
{
	int i,j,n,count=0;
	cin>>n;
	char a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=n-3;i++)
	{
		if(a[i]=='0'&&a[i+1]=='1')
		{
			if(a[i+2]=='0')
			{
				a[i+2]='1';
				count++;
			}
		}
	}
	cout<<count<<endl;
		for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
