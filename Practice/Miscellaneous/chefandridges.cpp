#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,t,a[26],x,y;
	a[0]=0;
	a[1]=1;
	for(i=2;i<26;i++)
	{
		a[i]=a[i-1]+2*a[i-2];
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		x=a[n];
		y=pow(2,n);
		cout<<x<<" "<<y<<" ";
	}
}
	
	
