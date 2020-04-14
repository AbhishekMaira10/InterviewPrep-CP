#include<iostream>
using namespace std;
int main()
{
	int i,j,t,n,k,c,m,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>c>>m;
		k=n/c;
		i=k;
		while(i>=m)
		{
			k++;
			i=i-m+1;	
			
		}
		cout<<k<<endl;
	}
	return 0;
}
