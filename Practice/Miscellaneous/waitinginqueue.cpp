#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,t,k,l;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k>>l;
		long long a[n+1],end,start,dif,i,temp,min=10000000000;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		a[n]=k;
		temp=m*l;
		for(i=0;i<=n;i++)
		{
			start=a[i];
			end=temp+(i+1)*l;
			dif=end-start;
			if(dif<min)
			{
				min=dif;
			}
		}
		cout<<min<<endl;
		min=10000000000;
	}
	return 0;
}
