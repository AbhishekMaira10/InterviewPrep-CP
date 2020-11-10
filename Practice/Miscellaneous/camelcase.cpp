#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,count=1;
	char s[100000];
	cin>>s;
	j=strlen(s);
	for(i=0;i<j;i++)
	{
       if(s[i]>=65&&s[i]<97)
	   {
	   	count++;
				} 		
	}
	
	cout<<count;
	return 0;
}
	
