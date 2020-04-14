#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,j,t,k,n,a,sum=0,count=0;
	cin>>t;
	while(t--)
	{
		cin>>a;
		i=1;
		j=pow(2,i-1);
		sum=a-j;
		long long max=sum,d;
		while(sum>0)
		{
			i++;
			count++;
			sum=sum+(a-pow(2,i-1));
			if(sum>max)
			{
			max=sum;
			d=count;
			}	
		}
		cout<<count<<" "<<d+1<<endl;
		sum=0;
		count=0;
	}
}
