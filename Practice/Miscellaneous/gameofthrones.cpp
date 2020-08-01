#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100000];
	int i,l,j,count[26]={0},count_1=0,count_2=0;
	cin>>s;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		count[s[i]-'a']++;
	}
	if(l%2==0)
	{
		for(i=0;i<26;i++)
		{
			if(count[i]%2==0&&count[i]!=0)
			{
				count_1++;
			}
		}
		if(count_1==l)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	else
	{
			for(i=0;i<26;i++)
		{
			if(count[i]%2==0&&count[i]!=0)
			{
				count_1++;
			}
		}
					for(i=0;i<26;i++)
		{
			if(count[i]==1)
			{
				count_2++;
			}
		}
		int r=l-1;
		if(count_1==r&&count_2==1)
		{
				cout<<"YES"<<endl;
		}
			else
		{
			cout<<"NO"<<endl;
		}
		
		
	}
	
	
	return 0;
}
