#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l=0,count=1;
int a[]={1,4,4,4,3};
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
cout<<count<<endl;

return 0;
}

