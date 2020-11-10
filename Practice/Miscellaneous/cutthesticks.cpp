#include<iostream>
using namespace std;
int main()
{
int i,j,n,k,max,min,count=0,uniq=1,temp;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
	cin>>a[i];
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
for(int i=0;i<n-1;i++)
{
if(a[i]==a[i+1])
continue;
else
uniq++;
}
max=0;
for(i=0;i<n;i++)
{
	if(a[i]>max)
	{
		max=a[i];
	}
}
min=max;
cout<<n<<endl;
for(i=0;i<uniq-1;i++)
{

	for(j=0;j<n;j++)
	{
			if(a[j]<min&&a[j]!=0)
			{
				min=a[j];
			}
}
		for(k=0;k<n;k++)
			{
				if(a[k]!=0)
				{
				a[k]=a[k]-min;
			}
			}
			for(int p=0;p<n;p++)
			{
			  if(a[p]!=0)
				{
					count++;
				}
			}	
			cout<<count<<endl;
			count=0;

}
return 0;
}
