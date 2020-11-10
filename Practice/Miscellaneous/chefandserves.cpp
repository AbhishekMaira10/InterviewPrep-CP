#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,k,i,j,t,c;
cin>>t;
while(t--)
{
cin>>a>>b>>k;
c=a+b;
c=c/k;
if(c%2==0&&c!=1)
	{
		cout<<"CHEF"<<endl;
	}	
	else if(c==1)
	{
		cout<<"COOK"<<endl;
	}
	else if(c%2!=0)
	{
		cout<<"COOK"<<endl;
	}
}
return 0;
}
