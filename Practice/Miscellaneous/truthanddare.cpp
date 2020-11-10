#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i,j,t_r,d_r,t_s,d_s;
cin>>t;
while(t--)
{
	int count=0,count1=0;
cin>>t_r;
int T[t_r];
for(i=0;i<t_r;i++)
	{
		cin>>T[i];
	}
cin>>d_r;
int D[d_r];
for(i=0;i<d_r;i++)
	{
		cin>>D[i];
	}
cin>>t_s;
int T1[t_s];
for(i=0;i<t_s;i++)
	{
		cin>>T1[i];
	}	
cin>>d_s;
int D1[d_s];
for(i=0;i<d_s;i++)
	{
		cin>>D1[i];
	}	
	for(i=0;i<t_s;i++)
	{
		for(j=0;j<t_r;j++)
		{
			if(T1[i]==T[j])
			{
				count++;
				goto label;
			}
		}
		label:;
	}
		for(i=0;i<d_s;i++)
	{
		for(j=0;j<d_r;j++)
		{
			if(D1[i]==D[j])
			{
				count1++;
				goto label1;
			}
		}
		label1:;
	}

	if((count==t_s)&&(count1==d_s))
	{
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	}		
	return 0;
}

