#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,t,l,count=0;
cin>>t;
char s[10000];
string p="hackerrank";
while(t--)
{
	cin>>s;
	l=strlen(s);
	for(i=0;i<10;i++)
	{
		for(j=0;j<l;j++)
		{
			if(p[i]==s[j])
			{
				count++;
				goto label;
			}
		}
		label:;
	}
	if(count==10)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;

}	
	
	return 0;
}
