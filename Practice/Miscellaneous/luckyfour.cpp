#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,temp,t,count=0,r;
	cin>>t;
	while(t--)
	{
	
	cin>>n;
	temp=n;
	while(temp)
	{
		r=temp%10;
		if(r==4)
		{
			count++;
		}
		temp=temp/10;
	}
	cout<<count<<endl;
	count=0;
	
}
	return 0;
}
