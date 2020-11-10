#include<iostream>
using namespace std;
int main()
{
int i,j,x,y,temp,h;
cin>>x;
h=1;
for(i=0;i<x;i++)
{
	
	cin>>y;
	for(j=0;j<=y;j++)
	{
		
	if(j==0)
	{
		h=h+j;
	}
	else if(j%2==0)
	{
		h=h+1;
	}
	else
	{
		h=2*h;
	}

}
	cout<<h<<endl;
	h=1;
}
return 0;
}
