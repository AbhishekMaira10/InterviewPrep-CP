#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i;
	cin>>t;
	while(t--)
	{
		long long int n,sum=0;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		cout<<sum-n+1<<endl;
	}
}
