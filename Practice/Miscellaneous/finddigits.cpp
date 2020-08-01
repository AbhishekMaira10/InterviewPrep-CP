#include<iostream>
using namespace std;
int main()
{
	int i,j,temp,n,x,count=0,y,count1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		temp=x;
	
		while(temp>0){
		y=temp%10;
		temp=temp/10;
		
		if(y!=0&&x%y==0)
		{
			count++;
		}
	
		}
       cout<<count<<endl;
       count=0;
	}
		
	return 0;

}
