#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,a,b,n,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		n=a+b;
		for(i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
				a=a-i;
				if(a<0)
				{
					cout<<"Bob"<<endl;
					break;
				}
			}
			if(i%2==0)
			{
				b=b-i;
				if(b<0)
				{
					cout<<"Limak"<<endl;
					break;
				}
			}	
		}		
	}
	return 0;
}
