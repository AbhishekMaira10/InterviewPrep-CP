#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int i,j,t,k,n;
	cin>>t;
	while(t--)
	{
		long long int sum=0,count=0;
		cin>>n>>k;
		int a[k];
		for(i=0;i<k;i++)
		cin>>a[i];
		for(i=0;i<k;i++)
		{
			sum=sum+a[i];
			if(sum>n)
			{
				goto label;
			}
			else
			count++;
		}
		label:;
		cout<<count<<endl;
	}
	return 0;
}
