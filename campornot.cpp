#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int d;
		cin>>d;
		int a[d][2];
		
		for(i=0;i<d;i++)
		{
			
			for(j=0;j<2;j++)
			{
				cin>>a[i][j];
			}
		}
		int q;
		cin>>q;
		int b[q][2];
		for(i=0;i<q;i++)
		{
			for(j=0;j<2;j++)
			{
				cin>>b[i][j];
			}
		}
		int sum=0;
		for(i=0;i<d;i++)
		{
			a[i][1]=a[i][1]+sum;
			sum=a[i][1];
		}
		for(i=0;i<q;i++)
		{
			int x=b[i][0];
			for(j=0;j<d;j++)
			{
				if(x>=a[j][0])
				{
					if(a[j][1]>=b[i][1])
					{
						cout<<"Go Camp\n";
						goto label;
				}
				}
			}
			cout<<"Go Sleep\n";
			label:;
		}	
	}
	return 0;
}
