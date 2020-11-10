#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,t,n,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		int x[n],a[n];
		for(i=0;i<n;i++)
		cin>>x[i];
		for(i=0;i<n-d;i++)
		{
			a[i]=x[i+d];
		}
		j=0;
		for(i;i<n;i++)
		{
			a[i]=x[j];
			j++;
		}
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
