#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,t,n,j,temp,temp1,temp_v,counta,countb,count2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		i=1;
		int count[n+1]={0};
		counta=0;
		countb=0;
		count2=0;
		while(1)
	{
		for(i;i<n+1;i++)
		{
			count[a[i]]++;
			if(count[a[i]]>1)
			{
				temp=i;
				temp_v=a[i];
				break;
			}
			else
			continue;			
		}
		i++;
		for(j=1;j<n+1;j++)
		{
			if(a[j]==temp_v)
			{
				temp1=j;
				break;
			}
		}
		for(j=1;j<n+1;j++)
		{
			if(a[j]==temp)
			{
				counta++;
			}
			if(a[j]==temp1)
			{
				countb++;
			}
		}
		if(counta>=1&&countb>=1)
		{
			cout<<"Truly Happy"<<endl;
			count2++;
			//cout<<temp<<" "<<temp1<<" "<<temp_v<<" "<<counta<<" "<<countb<<" "<<i<<endl;
			goto label;
		}
		if(i>=n+1)
		{
			break;
		}
	}
	label:;
	if(count2==0)
	{
		cout<<"Poor Chef"<<endl;
		
	}
	}
	return 0;
}
