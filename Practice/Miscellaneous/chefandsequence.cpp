#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,t,i;
	while(t--)
	{
		cin>>n>>k;
		int a[n],count=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				count++;
			}
		}
		int x=n-count;
		if(k>=x)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
