#include<iostream>
using namespace std;
int main()
{
	int i,x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
		if((x2>x1)&&(v2>v1))
			{
				cout<<"no"<<endl;
			}
	for(i=0;i<100;i++)
	{
			 if((x1+i*v1)==(x2+i*v2))
			{
				cout<<"yes"<<endl;
			}

	}
	
	return 0;
}
