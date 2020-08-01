#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,temp,t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(k>=a[i])
			{
				k=k-a[i];
				cout<<1;
			}
			else
			cout<<0;
		}	
		cout<<endl;
	}
	return 0;
}
