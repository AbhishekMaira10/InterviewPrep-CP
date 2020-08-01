#include<iostream>
using namespace std;
int main()
{
	int n,no[n],i;
	static int max=no[0];
	static int count=0;
	cout<<"enter the age of coleen"<<endl;
	cin>>n;
	cout<<"enter the heights of the candles"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>no[i];
	}
	for(i=1;i<n;i++)
	{
		if(no[i]>=max)
		max=no[i];
	}
		for(i=0;i<n;i++)
		{
			if(no[i]==max)
			count++;
		}
		cout<<"the value of count is:"<<count;
		return 0;
}
