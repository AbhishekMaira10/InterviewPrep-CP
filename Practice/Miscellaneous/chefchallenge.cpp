#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,t,k,n,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		int freq[300001]={0};
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		freq[a[i]]++;
		}
		int max=0;
		for(i=0;i<300001;i++)
		{
			if(freq[i]>max)
			{
				max=freq[i];
			}
		}
		if(max<k)
		cout<<"-1"<<endl;
		else
		{
			cout<<endl;
		}
	}
}
