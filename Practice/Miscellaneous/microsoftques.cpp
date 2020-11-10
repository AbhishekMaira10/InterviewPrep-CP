#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,l,count=0;
	char s[1000000];
	gets(s);
	l=strlen(s);
	label:;
	if(i==-1)
	{
		return 0;
	}
	for(i=l-1;s[i]!=' ';i--)
	{
		if(i==-1)
		{
			break;
		}
		
	}
	for(j=i+1;j<l;j++)
	{
		cout<<s[j];
	}
	cout<<" ";
	l=i;
	goto label;
}
	
	
	
