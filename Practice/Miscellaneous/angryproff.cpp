#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k,p,count=0,x;
	cin>>x;

for(p=0;p<x;p++)
{
			cin>>n>>k;
	int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		for(j=0;j<n;j++)
		{
			if(a[j]<=0)
			{
				count++;
			}
		}
		if(count>=k)
		{
			cout<<"NO"<<endl;
			
		}
		else
		{
			cout<<"YES"<<endl;
		}
	count=0;
	
	}
	
	return 0;
}
	
