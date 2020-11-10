#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,t,n,maxt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[1000000]={0};
		maxt=INT_MIN;
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		b[a[i]]++;
		if(a[i]>=maxt)
		maxt=a[i];
		}
		int k=n/2;
		for(i=0;i<=maxt;i++)
		{
			if(b[i]>k)
			cout<<i<<endl;
			goto label;
		}
		cout<<"-1"<<endl;
		label:;
	}
	return 0;
}
