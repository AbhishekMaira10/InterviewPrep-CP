#include<bits/stdc++.h>
using namespace std;
int main(){
	long int i,t,x,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long int x[n],count=0;
		for(i=0;i<n;i++)
		{
		cin>>x[i];
		if(x[i]<0)
			{
				count++;
			}
		}
		if(count==0)
		{
			cout<<n<<" "<<n<<endl;
		}
		else 
		{
			a=n-count;
			b=count;
			if(a==0)
			{
			cout<<n<<" "<<n<<endl;
			goto label;
			}
			if(a>=b)
			cout<<a<<" "<<b<<endl;
			else if(b>a)
			cout<<b<<" "<<a<<endl;
		}
		label:;	
	}
	return 0;
}
