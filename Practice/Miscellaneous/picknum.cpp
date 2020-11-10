#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n];
	
int count[100]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		count[a[i]]++;
	}
int max=0;
for(i=0;i<n;i++)
{
	if(count[i]+count[i+1]>max)
	{
		max=count[i]+count[i+1];
	}
}
cout<<max<<endl;
return 0;
}


