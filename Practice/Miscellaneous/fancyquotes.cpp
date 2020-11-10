#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	int t,l,i,j,count=0;
	cin>>t;
	string s;
	getline(cin,s);
	while(t--)
	{
		string s;
		getline(cin,s);
		l=s.length();
		if(l==3)
		{
			if((s[0]=='n')&&(s[1]=='o')&&(s[2]=='t'))
			{
				count++;
			}	
		}
			else if(l>3)
			{
			for(i=0;i<l;i++)
			{
			if(s[0]=='n')
			{
				if(s[1]=='o'&& s[2]=='t'&&s[3]==' ')
				{
					count++;
					goto label;
				}
			}
			if(s[l-3]=='n')
			{
				if(s[l-4]==' '&&s[l-2]=='o'&&s[l-1]=='t')
				{
					count++;
					goto label;
				}
				}
				else
				{
			if((s[i]==' ')&&(s[i+1]=='n')&&(s[i+2]=='o')&&(s[i+3]=='t')&&(s[i+4]==' '))
			{
				count++;
				goto label;
			}
				}
		}
		}
		label:;
		if(count>0)
		{
			cout<<"Real Fancy"<<endl;
		}
		else
		{
			cout<<"regularly fancy"<<endl;	
		}
		count=0;
	}
	return 0;
}
