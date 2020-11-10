#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,t,k,l,r,temp;
	cin>>t;
	while(t--)
	{
		string s,e;
		int count1=0;
		cin>>s>>e>>l>>r;
		if(s=="monday")
		i=1;
		else if(s=="tuesday")
		i=2;
		else if(s=="wednesday")
		i=3;
		else if(s=="thursday")
		i=4;
		else if(s=="friday")
		i=5;
		else if(s=="saturday")
		i=6;
		else if(s=="sunday")
		i=7;
		if(e=="monday")
		j=1;
		else if(e=="tuesday")
		j=2;
		else if(e=="wednesday")
		j=3;
		else if(e=="thursday")
		j=4;
		else if(e=="friday")
		j=5;
		else if(e=="saturday")
		j=6;
		else if(e=="sunday")
		j=7;
		if(j>=i)
		{
			k=abs(j-i)+1;
		}
		else if(j<i)
		{
			k=(7-abs(j-i))+1;
		}
		if(k>=l&&k<=r)
		{
			temp=k;
			while(temp<=r)
			{
				count1++;			
				temp=temp+7;	
			}
		}
		else if(k<l)
		{
			while(k<l)
			{
				k=k+7;
			}
			temp=k;
			while(temp<=r)
			{
			count1++;			
			temp=temp+7;
			}		
		}
		if(count1==1)
		cout<<k<<endl;
		else if(count1>1)
		cout<<"many"<<endl;
		else
		cout<<"impossible"<<endl;
	}
	return 0;
}
