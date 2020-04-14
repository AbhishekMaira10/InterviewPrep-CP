#include<iostream>
using namespace std;
int main()
{
	int n,k,i,j,diff,max;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	if(max>k)
	{
		diff=max-k;
		cout<<diff;
	}
	else
	{
	     cout<<'0';
    }
    return 0;
}
