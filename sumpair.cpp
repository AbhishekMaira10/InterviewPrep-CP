#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,j,t,k,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long a[n],b[10000000]={0},count=0;
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		b[a[i]]++;
		}
		cin>>k;
		if(k<a[0])
			{
				cout<<"-1"<<endl;
				goto label;
			}
		for(i=0;i<n;i++)
		{
			if((k-a[i])!=a[i]&&b[k-a[i]]>0)
			{
				cout<<a[i]<<" "<<k-a[i]<<" "<<k<<endl;
				count++;
				b[k-a[i]]=-1;
			}
		}
		if(count==0)
		cout<<"-1"<<endl;			
	label:;		
	}
return 0;
}
