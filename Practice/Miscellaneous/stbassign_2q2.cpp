#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,sum_a=0,n,max=-100000000;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum_a=sum_a+a[i];
	}
	int sum1=a[0];
	for(i=1;i<n-1;i++)
	{
		if((sum_a-a[i]-sum1)==sum1)
		{
			if(sum1>max)
				max=sum1;
		}
		sum1=sum1+a[i];
	}
	cout<<max<<endl;
	return 0;
}
