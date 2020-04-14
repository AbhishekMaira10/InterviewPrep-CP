#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,i,j,k;
	cin>>t;
	while(t--)
	{
		int l,count=1,count2=0;
		cin>>n;
		char s[n][200];
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		int a[26];
		for(i=0;i<26;i++)
		a[i]=1;
		l=strlen(s[0]);
		for(i=0;i<l;i++)
		{
			for(j=1;j<n;j++)
			{
				for(k=0;s[j][k]!='\0';k++)
				{
					if(a[s[0][i]-'a']>0)
					{
						if(s[0][i]==s[j][k])
						{
						count++;
						goto label;
						}
					}
				}
				label:;
			}
			if(a[s[0][i]-'a']){
			a[s[0][i]-'a']=0;
			if(count==n)
			count2++;
		}
			count=1;
		}
		cout<<count2<<endl;	
	}
}
