#include<iostream>
using namespace std;
int main()
{
	int birds[5]={};
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		++birds[x-1];
	}
	int max=0,index;
	for(int i=0;i<5;i++)
	{
		if(max<birds[i])
		{
			index=i;
			max=birds[i];
		}
	}
	cout<<index+1<<endl;
}






















int i,j,k,l=0,count=1;
int a[]={1,4,4,3,3,2,4,3,7,7,};
int b[5];
for(i=0;i<5;i++)
{
	for(k=0;k<l;k++)
	{
		if(a[i]==b[k])
		goto label;
	}
	for(j=i+1;j<5;j++)
	{
		if(a[i]==a[j])
		{
			count++;
			b[l]=a[i];
			l++;
			
		}
	}
	label:;
}





