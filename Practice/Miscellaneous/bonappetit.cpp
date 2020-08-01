#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,n,k,charge,x,y,z;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>charge;
	for(i=0;i<n;i++)
	{
		if(i!=k)
		{
			sum=sum+a[i];
			}	
		
	}
	z=sum/2;
	if(z==charge)
	{
		cout<<"Bon Appetit";
	}
	else
	{
		cout<<(charge-z);
	}
	return 0;
}
