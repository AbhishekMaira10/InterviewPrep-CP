#include <iostream>
using namespace std;

int main() {
	int test,m,n,check,check2,scheck;
	string wc,mn;
	cin>>test;
	while(test--)
	{
		check=0;check2=0,scheck=0;
		cin>>n>>m;
		while (n--)
		{
			check2=0;
			cin>>wc>>mn;
	                     
			if (wc=="correct")
			{
			for (int i=0;i<mn.length();i++)
			 {
			if (mn[i]=='0'&& check==0)
			  {
				check=1;
			  }
			 }
			}
				else 
			{
			for (int i=0;i<mn.length();i++)
			 {
			if (mn[i]=='0')
				check2=1;
			 }
			 if (check2!=1)
			 {
			 scheck=1;	
			 }
			}

		}
		if (check==1)
			cout<<"INVALID"<<endl;
		else if(scheck==1)
			cout<<"WEAK"<<endl;
		else
			cout<<"FINE"<<endl;
	}
	return 0;
}
