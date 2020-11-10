#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,i,j,l;
	cin>>t;
	while(t--)
	{
		int count=0;
		int count1=0,max=0;
		string s;
		cin>>s;
		l=s.length();
		for(i=0;i<l-1;i++)
		{
			if(s[i]==s[i+1])
			{
				count++;
			}
		}
		if(count==0)
		{
			cout<<"yes"<<endl;
		}
		else if(l==2&&count==1)
		{
			cout<<"no"<<endl;
		}
		else if(l==3)
		{
			cout<<"no"<<endl;
		}
		else
		{
			int cut[2]={0};
			int k=0;
			for(i=0;i<l-1;i++)
			{
				if(s[i]==s[i+1])
				{
					cut[k]=i+1;
					k++;
				}
				if(k==1)
				{
					goto label3;
				}
			}
			label3:;
			int temp;
			if(cut[0]+1>l-1)
			{
			
			temp=s[cut[0]];
			s[cut[0]]=s[cut[0]+1];
			s[cut[0]+1]=temp;
			if(s[0]==s[l-1])
			{
				cout<<"no"<<endl;
				goto label1;
			}
			int count2=0;
			if(s[0]!=s[l-1])
			{
		for(i=0;i<l-1;i++)
		{
			if(s[i]==s[i+1])
			{
				count2++;
			}
		}
		if(count2==0)
		{
			cout<<"yes"<<endl;	
		}
		else
		{
		cout<<"no"<<endl;
		}
				
			}
			
		}
		else
		{
						
			temp=s[cut[0]-1];
			s[cut[0]-1]=s[cut[0]-2];
			s[cut[0]-2]=temp;
			if(s[0]==s[l-1])
			{
				cout<<"no"<<endl;
				goto label1;
			}
			int count2=0;
			if(s[0]!=s[l-1])
			{
		for(i=0;i<l-1;i++)
		{
			if(s[i]==s[i+1])
			{
				count2++;
			}
		}
		if(count2==0)
		{
			cout<<"yes"<<endl;	
		}
		else
		{
		cout<<"no"<<endl;
		}
		
			
		}
		}
	}
	
		label:;
		label1:;
	}
	return 0;
}
