#include<bits/stdc++.h>
using namespace std;
int main()
{
long long  n;
long long t,i,j,p,y,k,x,u,r,z,Q,q;
	cin>>t;
	while(t--)
	{
	
	  p=0;
		cin>>n;
		for(j=0;j<=30;j++)
		{
			for(k=j+1;k<=30;k++)
	     	{
           y=pow(2,j)+pow(2,k);
           if(y>=n)
           {
           	u=j;
           	r=k-1;
           	goto label;
           	
		   }
		    }
		    
	   	}
	   	label:;
	   	z=pow(2,u)+pow(2,r);//u r z q
	   	q=y-n;
	   	Q=n-z;
	   	cout<<min(q,Q)<<"\n";
	}
	return 0;
}
