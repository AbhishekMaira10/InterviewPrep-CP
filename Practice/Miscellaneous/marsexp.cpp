#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int i,j,l,k,x=0,count=0;
	char temp[100],s[100];
	char a[]={'s','/0'};
		char b[]={'o','/0'};
		gets(s);
		l=strlen(s);
		for(i=0;i+x<l;i++)
		{
			temp[i+x]=a[0];
			temp[i+x+1]=b[0];
				temp[i+x+2]=a[0];
				x=x+2;
		}
		
	if(l%3==0)
	{
		for(i=0;i<l;i++)
		{
			if(s[i]-temp[i])
			{
				count++;
			}
		}
	cout<<count;	
	
	}
	
	return 0;
}

