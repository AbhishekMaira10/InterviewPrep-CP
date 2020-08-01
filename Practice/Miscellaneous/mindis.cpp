#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,mind,min;
	cin>>n;
	int a[n];
	min=n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					mind=abs(j-i);
				}
				if(mind<min)
				{
					min=mind;
				}
				
			}
		}
		cout<<min;
		
		return 0;
}
