#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the pairs are"<<endl;
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]+a[j]==k)
		{
			cout<<a[i]<<","<<a[j]<<endl;
		}
	}
	}
	return 0;
}
