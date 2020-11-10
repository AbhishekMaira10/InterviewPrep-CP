#include<iostream>
using namespace std;
int main()
{
int i,a[3],b[3],count1=0,count2=0;
for(i=0;i<3;i++)
{
	cin>>a[i];
}

for(i=0;i<3;i++)
{
	cin>>b[i];
}

for(i=0;i<3;i++)
{
	if(a[i]>b[i])
	{
		count1++;
	}
	else if(b[i]>a[i])
	{
		count2++;
	}
}
cout<<count1<<" "<<count2<<endl;
return 0;
}
