#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,k,sum=2,len,fans=0,y,p;
	cin>>t;

		for(i=0;i<t;i++)
		{
			cin>>n;
			string str[n];
			int ans[n];
			for(j=0;j<n;j++)
			{
				cin>>str[j];
				for(y=0;y<j;y++)
				{
					if(str[y]==str[j])
					{
						ans[j]=ans[y]/2;
						goto label;
					}
				}
				len=str[j].length();
				for(k=1;k<len;k++)
				{
					if(str[j][k]=='d'||str[j][k]=='f')
					{
					
						if(str[j][k-1]=='d'||str[j][k-1]=='f')
						sum=sum+4;
						else
						sum=sum+2;
					}
					else
					{
						if(str[j][k-1]=='d'||str[j][k-1]=='f')
						sum=sum+2;
						else
						sum=sum+4;
					}
				}
			ans[j]=sum;
			sum=2;
		label:;
		continue;
			}
		for(p=0;p<n;p++)
		fans=fans+ans[p];
		cout<<fans<<endl;
		fans=0;
	}
}
