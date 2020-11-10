#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,count=0;
char a[100],b[100];
cin>>a;
for(i=0;i<100;i++)
{
	if(a[i]==a[i+1])
	{
		continue;
	}
	else
	{
	b[i]=a[i];
	count++;
}
}
for(i=0;i<count;i++)
{

	cout<<b[i];

}
return 0;
}


