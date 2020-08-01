#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,a,k,b,x,y,z,count;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>k;
		x=n/a;
		y=n/b;
		z=n/(a*b);
		if(a%b==0)
		count=y-x;
		else if(b%a==0)
		count=x-y;
		else
		count=x+y-(2*z);
		if(count>=k)
		cout<<"Win"<<endl;
		else if(count<k)
		cout<<"Lose"<<endl;
	}
}
	
