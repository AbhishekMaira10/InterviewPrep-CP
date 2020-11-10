#include<iostream>
using namespace std;
int main()
{
int i,j,n,m,s,t,k=0,y,x;
cin>>t;
while(t--)
{
cin>>n>>m>>s;
int a[n+1];
for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	while(m--)
	{
		if(k+s<=n)
		{
		int x=k+s;
		y=a[x];
		k++;
	}
	else
	{
		x=(k+s)%n;
		y=a[x];
		k++;
	}		
	}
	cout<<y<<endl;
	k=0;
		
}
return 0;
}
