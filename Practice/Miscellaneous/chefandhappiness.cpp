#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,t,n,j,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if((a[i]!=a[j])&&(a[a[i]]==a[a[j]]))
				{
					count++;
				}
			}
		}
		if(count>0)
		{
			cout<<"Truly Happy"<<endl;
		}
		else{
				cout<<"Poor Chef"<<endl;
		}
	count=0;		
	}
	return 0;
}
