#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,k,first=1,diff=1;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			int add=i;
			for(j=1;j<=n;j++)
			{
					if(j==1)
					{
					cout<<first<<" ";
					k=first;
				    }
				    else if(j!=1)
				    {
				    	if((i+j)>(n+1))
				    	{
				    		k=k+add;
				    		k=k-diff;
				    		cout<<k<<" ";
				    		diff=diff+2;;
				    		add++;
						}
				    	else
				    	{
				    		k=k+add;
				    		cout<<k<<" ";
				    		add++;
						}
					}
			}
			cout<<endl;
			first=first+i+1;
			diff=1;
		}
	}
}
