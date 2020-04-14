#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,count[26];
	char s[1000];
	gets(s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
			if(s[i]>=65&&s[i]<=90)
			{
				count[s[i]-65]++;
			}
			else if(s[i]>=97&&s[i]<=122)
			{
				count[s[i]-97]++;
			}
	}
	for(i=0;i<26;i++)
	{
		if(count[i]>=1)
		{
			j++;
		}	
	}
	if(j==26)
	{
		cout<<"pangram";
	}
	else
	cout<<"not pangram";
	
	return 0;
}
