#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,t,n,count=0;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		int b[n+1];
		for(i=1;i<=n;i++)
		{
			b[i]=0;
		}
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=n)
			{
			b[a[i]]=1;
		}
		}
		for(i=1;i<=n;i++)
		{
			if(b[i]!=1)
			{
				count++;
			}
		}
	cout<<count<<endl;
	count=0;
	}
	return 0;
}
