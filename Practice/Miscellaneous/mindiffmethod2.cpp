#include<iostream>
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
	for (i = 0; i<n-1;i++)
{
for (j = 0; j <n-i-1;j++)
                   {    if (a[j]>a[j + 1])
	  		{    a[j]=a[j]+a[j + 1];
 			     a[j+1]=a[j]-a[j+1];
 			    a[j]=a[j]-a[j+1];	  }
 			}
}

	for(i=0;i<n-1;i++)
{
		if(a[i+1]-a[i]<d)
		{
			d=a[i+1]-a[i];
		}
}
	cout<<"the minimum difference is:"<<d<<endl;

	
return 0;
}
