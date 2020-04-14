#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,t,k,n,v,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>v;
		int a[n];
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		sum=sum+a[i];
		}
		j=n+k;
		int x;
		x=v*j;
		x=x-sum;
		if(x%k==0&&x>0)
		{
			cout<<x/k<<endl;
		}
		else
		cout<<"-1"<<endl;
		sum=0;
	}
	return 0;
}
