#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,t,count=0,l;
	cin>>t;
    char s[10000],a[10000];
	while(t--)
	{
        cin>>s;
		l=strlen(s);
		strcpy(a,s);		
		strrev(a);
		if(strcmp(a,s)==0)
		{
			cout<<count;
		}
	
		
		
	
	}
	return 0;
}
