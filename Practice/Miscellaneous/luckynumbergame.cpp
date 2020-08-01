#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,t,n,i,j;
	cin>>t;
	while(t--)
	{
	long long count=0,count1=0,count2=0;
		cin>>n>>a>>b;
	long long int x[n],y[n]={0};
		for(i=0;i<n;i++)
		{
			cin>>x[i];
		}
		if(a==b)
		{
			for(i=0;i<n;i++)
			{
				if(x[i]%a==0)
				count++;
			}
		if(count>0)
		cout<<"BOB"<<endl;
		else
		cout<<"ALICE"<<endl;
	}
	else
	{
			for(i=0;i<n;i++)
			{
				if(x[i]%a==0)
				count++;
				if(x[i]%b==0)
				count1++;
				if(x[i]%a==0&&x[i]%b==0)
				count2++;
			}
			if(count==0)
			{
				cout<<"ALICE"<<endl;
				goto label;
			}
			if(count2==0)
			{
			if(count==count1&&count!=0)
			cout<<"ALICE"<<endl;
			goto label;
			}
			count=count-count2;
			count1=count1-count2;
			if(count==count1&&count==0)
			cout<<"BOB"<<endl;
			else if(count==count1&&count!=0)
			cout<<"BOB"<<endl;
			else if(count>count1)
			cout<<"BOB"<<endl;
			else
			cout<<"ALICE"<<endl;	
		}
	label:;	
	}
	return 0;
}
