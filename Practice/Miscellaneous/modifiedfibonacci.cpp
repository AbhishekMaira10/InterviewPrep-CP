#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t1,t2,n,i,sum=0;
	cin>>t1>>t2>>n;
	int a[n+1];
	a[0]=t1;
	a[1]=t2;
	for(i=0;i<n-1;i++)
	{
		a[i+2]=a[i]+(a[i+1]*a[i+1]);
	}
	cout<<a[n-1];
	return 0;
}
