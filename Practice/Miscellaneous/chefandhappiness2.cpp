#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,t;
	cin>>t;
	while(t--)
	{
	cin>>n;	
	int a[n+1];
	int count1[n+1]={0};
	int count[n+1]={0};
	int count2=0;
	for(i=1;i<n+1;i++)
	{
		cin>>a[i];
		count[a[i]]++;
	}
	for(i=1;i<n+1;i++)
	{
		if(count[a[i]]>1)
		{
			if(count[i]>0)
			{
				count1[a[i]]++;
			}

		}
	}
	for(i=1;i<n+1;i++)
	{
	if(count1[i]>=2)
	{
		cout<<"Truly Happy"<<endl;
		count2++;
		break;
	}
	}
	if(count2==0)
	{
		cout<<"Poor Chef"<<endl;
	}
	}
	return 0;
}
