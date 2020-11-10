#include<iostream>
using namespace std;
int main()
{
	int i,j,n,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;)
	{
		if(a[i+1]!=1&&a[i+2]==1)
		{
			count++;
			i++;
		}
		else if(a[i+1]==1&&a[i+2]!=1)
		{
			count++;
			i=i+2;
		}
			else if(a[i+1]!=1&&a[i+2]!=1)
		{
			count++;
			i=i+2;
		}
		
		
	}
	cout<<count;


return 0;
}
 
