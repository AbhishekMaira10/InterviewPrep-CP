#include<bits/stdc++.h>
using namespace std;
int main(){
	long int i,t,n,l;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int x[n],y[11]={0},j=0,count_1=0,k;
		string s;
		k=n;
		while(n--)
		{
			int count=0,count1=0,count2=0,count3=0,count4=0,sum=0;
			cin>>s;
			l=s.length();
			for(i=0;i<l;i++)
			{
				if(s[i]=='a'&&count==0)
				{
					sum=sum+0;
					count++;	
				}
				if(s[i]=='e'&&count1==0)
				{
					sum=sum+1;
					count1++;
				}
				if(s[i]=='i'&&count2==0)
				{
					sum=sum+2;
					count2++;
				}
				if(s[i]=='o'&&count3==0)
				{
					sum=sum+3;
					count3++;
				}
				if(s[i]=='u'&&count4==0)
				{
					sum=sum+4;
					count4++;
				}
			}
			cout<<sum<<endl;
			x[j++]=sum;
			y[sum]++;
		}
		for(i=0;i<k;i++)
		{
			if(y[10-x[i]]>0)
			count_1++;
		}
		cout<<count_1<<endl;
	}
}
