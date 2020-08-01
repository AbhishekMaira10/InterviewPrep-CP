#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
int i,n,j,t,min=1000000,k;
cin>>t;
while(t--)
{	
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n-1;i++)
	{
	   k=abs(a[i]-a[i+1]);
	   if(k<=min)
	   {
	   	min=k;
	   }
	}
	cout<<min<<endl;
	min=1000000;	
	
}
return 0;
}
