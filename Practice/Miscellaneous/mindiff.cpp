#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[10],n,i,j,d;
	d=100;
	cout<<"enter the number of elements in the array"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;i++)
	{
		if(abs(a[i]-a[j])<d)
		{
			d=abs(a[i]-a[j]);
		}
	}
}
	cout<<"the minimum difference is:"<<d<<endl;
	return 0;
}
