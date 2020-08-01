#include<iostream>
#include<math.h>
using namespace std;
int main()
{
		int p,k,i,j,reverse=0,count=0,temp,a;
		cin>>i>>j>>k;
		for(p=i;p<=j;p++)
		{
			temp=p;
			while(temp!=0)
			{
				reverse=reverse*10;
				reverse=reverse+temp%10;
				temp=temp/10;
			}
			a=abs(p-reverse);
			if(a%k==0)
			{
				count++;
			}
			reverse=0;
		}
		cout<<count;
		return 0;
	}
