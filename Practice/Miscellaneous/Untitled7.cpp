
#include<iostream>>
using namespace std;
int main()
{
	 int n,k,x,i,j;
	 cin>>n>>k>>x;
	 int q[x],a[n];
	 int b[]={};
	 for(i=0;i<n;i++)
	 {
	    cin>>a[i];
	 }
	
	for(i=0;i<x;i++)
	{
		cin>>q[i];
	}
	for(i=0;i<k<i++)
	{
			b[0]=a[n-1];
		for(j=1;j<n;j++)
		{
		
			b[j]=a[j-1];
			
		}
	}
	for(i=0;i<n;i++)
	 {
	 cout<<b[i];
	 }
	 
	 for(i=0;i<x;i++)
	 {
	 	cout<<b[q[i]];
	 }
		
	return 0;
}

