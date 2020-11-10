#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,count=0,k,l1,l2,l,l_1,l_2;
	char s1[100],s2[100];
	cin>>s1>>s2>>k;
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1>=l2)
	{
	
	for(i=0;i<l1;i++)
	{
		if(s1[i]==s2[i])
		{
			count++;
		}
		else
		goto label;
	}
	label:;
	if(count==0)
	{
		l=l1+l2;
		if(k>=l)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<"No"<<endl;
	}
	else
	{
		l_1=l1-count;
		l_2=l2-count;
		l=l_1+l_2;
			if(k>=l)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<"No"<<endl;
	}
}
else
{
		
	for(i=0;i<l1;i++)
	{
		if(s1[i]==s2[i])
		{
			count++;
		}
		else
		goto labela;
	}
	labela:;
		if(count==0)
	{
		l=l1+l2;
		if(k>=l)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<"No"<<endl;
	}
	else if(count==l1)
	{
		l_2=l2-count;
		l=l_2;
			if(k==l)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<"No"<<endl;
		
	}
	else
	{
		l_1=l1-count;
		l_2=l2-count;
		l=l_1+l_2;
			if(k>=l)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<"No"<<endl;
	}
	
}
	return 0;
}
