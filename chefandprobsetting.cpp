#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int i,n,j,t,m,count=0,count1=0,l,sum=0,x,y;
	cin>>t;
	char s[100];
	
while(t--)
{	
cin>>n>>m;

for(i=0;i<n;i++)
{
	
    cin>>s;
    l=strlen(s);
    x=0,y=0;
    while (s[i])
    {
        if (s[x] != ' ')
           s[y++] = s[x];
        x++;
    }
    s[y] = '\0';
	l=strlen(s);
	if(l=m+7)
	{
		for(j=0;j<l;j++)
		{
		sum=sum+s[j];
		}
		if(sum==754+49*m)
		{
			count1++;
		}
		else 
		{
			cout<<"INVALID"<<endl;
			goto label;
		}	
	}
	else if(l=m+6)
	{
		for(j=0;j<l;j++)
		{
			if(s[j]=='1')
			{
				count++;
			}
		}
		if(count<m)
		{
			count1++;
		}
		
		
		
		
	}
	
	
}

label:;

}
cout<<l;
cout<<count<<endl<<count1<<endl<<sum<<s;
return 0;
}












