#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,t,n,count=0;
cin>>t;
while(t--){
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			break;
		}
	}
	k=0;
	for(j=0;j<n;j++)
	{
		if(i+k<n)
		{
			b[j]=a[i+k];
			k++;
		}
		else
		break;
	}
	for(int q=0;q<i;q++)
	{
		b[j]=a[q];
		j++;
	}
	for(i=1;i<n;i++)
	{
		if(b[i]>=b[i-1])
		{
			count++;
		}
	}
	if(count==n-1)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
	count=0;
	k=0;
}
return 0;
}
