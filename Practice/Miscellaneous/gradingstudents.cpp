#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp1,temp2;
	cin>>n;
	int ar[n];
	int temp[n]={0};
			for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
		for(i=0;i<n;i++)
		{
			if(ar[i]>=38)
			{

			temp2=(ar[i]%5);
			temp1=ar[i]+5-temp2;
			if(temp1-ar[i]<3)
			{
				temp[i]=temp1;
			}
		

	else 
	{
		temp[i]=ar[i];
	}
	}

		else
		{
			temp[i]=ar[i];
		}
	}
					for(i=0;i<n;i++)
	{
		cout<<temp[i]<<endl;
	}
	return 0;
}
		
