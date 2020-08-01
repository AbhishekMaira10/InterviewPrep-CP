#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,j,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		double a[n],sum=0,mean;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		mean=(double)sum/n;
			for(i=0;i<n;i++)
		{
			if(a[i]==mean)
			{
				cout<<i+1<<endl;
				goto label;
			}
		}
		cout<<"Impossible"<<endl;
		label:;
	}
	}
