#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,a[99],b[100]={0};
	for(i=0;i<99;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	for(i=0;i<100;i++)
	{
		if(b[i]==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
