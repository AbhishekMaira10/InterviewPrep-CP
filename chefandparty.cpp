#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int k=0;
		for(i=0;i<n;i++)
		{
			if(k>=a[i])
			{
				count++;
				k++;
			}
		}
		cout<<count<<endl;	
		
	}
	return 0;
}
