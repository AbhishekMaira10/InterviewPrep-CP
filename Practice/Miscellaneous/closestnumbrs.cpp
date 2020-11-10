#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n;
	long int min=10000000;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n-1;i++)
	{
		k=abs(a[i]-a[i+1]);
		if(k<=min)
		{
			min=k;
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(abs(a[i]-a[i+1])==min)
		{
		    cout<<a[i]<<" "<<a[i+1]<<" ";
		}
	}
	
	return 0;
}

	
	
