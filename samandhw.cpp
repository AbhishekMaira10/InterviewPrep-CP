#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,count=0,count1=0,len,len1,l;
	char s[25000],s1[25000];
	gets(s);
	len=strlen(s);
	cin>>len1;
	while(len1--){
		cin>>s1;
		l=strlen(s1);
		for(i=0;i<l;i++)
		{
			for(j=0;j<len;j++)
			{
				if(s1[i]==s[j])
				{
					if(i+1<l&&s1[i+1]==s[j+1])
					{
						count++;
						goto label;
					}
					else
					{
						count=0;
						i=0;
					}
				}
			}
			label:;
			if(count=l-1)
			{
				count++;
				break;
			}
		}
		if(count==l&&j+1==" ")
		{
			count1=count1+l;
		}
		else
		{
			cout<<-1<<endl;
			break;
		}
	}
	cout<<(count1+len1-1)<<endl;
return 0;
}
