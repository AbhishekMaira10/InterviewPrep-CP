#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,i,j,min,max=0;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
for(i=0;i<n;i++)
{
	if(a[i]>max)
	{
		max=a[i];
	}
}
min=max;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			if(a[i]-a[j]<min)
			{
				min=a[i]-a[j];
			}
		}
		}
	}
	cout<<min<<endl;
	return 0;
}



