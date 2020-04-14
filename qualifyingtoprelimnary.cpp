
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long int n,k,i,j,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long int s[n],temp;
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		sort(s,s+n,greater<int>());
		temp=s[k-1];
		for(i=0;i<n;i++)
		{
		  if(s[i]>=temp)
		{
		  	count++;
		}	
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}
	
