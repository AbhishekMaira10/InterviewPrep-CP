#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,j,t,n,count=1;
cin>>t;
while(t--)
{
	cin>>n;
	for(i=11;i>=0;i--)
	{	
		int k=pow(2,i);	
		if(k>n)
		{
			continue;
		}
		else if(k==n)
		{
			cout<<count<<endl;
			goto label;
		}
		else
		{
			int p=n-pow(2,i); 
			for(j=i;j>=0;j--)
			{
				int x=pow(2,j);
				if(p>=x)
				{
				if(p%x==0)
				{
					count=count+p/x;
					cout<<count<<endl;
					goto label;
				}
				else
				{
					count++;
					p=p%x;
				}
			}
			}				
	}

}
		label:;
		count=1;
}
return 0;
}
