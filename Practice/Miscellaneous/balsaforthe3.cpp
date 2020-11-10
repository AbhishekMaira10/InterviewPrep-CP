#include<iostream>
using namespace std;
int main()
{
	long int i,t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;	
	for(i=n+1;i<10000000000;i++)
	{
		long int p=i;
		int j=0,x;
		while(p)
		{
			x=p%10;
			p=p/10;
			if(x==3)
			{
				j++;
			}
		}
	if(j>=3)
	{
		j=0;
	goto label;
	}
	}
label:;
cout<<i<<endl;
}
	return 0;
}
