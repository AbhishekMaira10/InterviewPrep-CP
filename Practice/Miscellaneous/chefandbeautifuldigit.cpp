#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,k,x,t,d,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		k=n;
		int min=10,l,count=0;
		l=log10(n);
		while(k)
		{
			x=k%10;
			k=k/10;
			if(x>=d)
			count++;
			if(x<min)
			min=x;
		}
		if(count==l)
		{
			for(i=0;i<l;i++)
			cout<<d;
			cout<<endl;
			goto label;
		}
	label:;
}
	return 0;	
}
