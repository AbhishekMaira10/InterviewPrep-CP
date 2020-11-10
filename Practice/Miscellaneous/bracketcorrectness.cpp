#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,l,j,n,count=0,count1=0,count2=0;
	 string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		l=s.length();
		for(i=0;i<l/2;i++)
		{
			for(j=i+1;j<l;j++)
			{
			if(abs(s[i]-s[j])==1||abs(s[i]-s[j])==2)
			{ 
				count1++;
				goto label;
			}
			else
			{
				count++;
			}
		}
		label:;
		if((count1==1)&&((count%2)==0))
		{
			count2++;
		}
		else
		{
			cout<<"NO"<<endl;
			goto label1;
		}
		count=0;
		count1=0;
	
	}
	if(count2==(l/2))
	{
		cout<<"YES"<<endl;
	}
	count2=0;
	label1:;
	}
	return 0;
}
