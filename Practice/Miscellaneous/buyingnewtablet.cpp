#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,i,j;
	cin>>t;
	while(t--)
	{
		long long int n,b,w,h,p,max=0,count=0;
		cin>>n>>b;
		while(n--)
		{
			cin>>w>>h>>p;
			if(p<=b)
			{
				j=w*h;
				if(j>max)
				max=j;
				count++;
			}
		}
		if(count>0)
		cout<<max<<endl;
		else
		cout<<"no tablet"<<endl;
	}
	return 0;
}
