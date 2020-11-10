#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,k,t,d,n,min,max,mint;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		cin>>d;
		sort(a,a+n);
		mint=INT_MAX;
		for(i=0;i<=n-d;i++)
		{
			min=a[i];
			max=a[i+d-1];
			k=max-min;
			if(k<=mint)
			mint=k;
		}
		cout<<mint<<endl;	
	}
	return 0;
}
