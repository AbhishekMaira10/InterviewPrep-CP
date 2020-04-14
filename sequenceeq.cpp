#include<iostream>
using namespace std;
int main()
{
	int i,j,n,count=0;
	cin>>n;
	int a[n],b[100]={};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(a[a[j]]==i)
		{
			b[i]=j;
			count++;
		}
	    }
	}
	for(i=0;i<count;i++)
	{
		cout>>b[i];
	}
	return 0;
}

