#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
int n,i,j,k,p;
string s1,s2;
char a[]={'b','o','b','\0'};
char x[]={'o','\0'};
char y[]={'b','\0'};
	
	cin>>n;
for(i=0;i<n;i++)
{
	cin>>s1>>s2;
	if(s1==a||s2==a)
	{
		cout<<"yes"<<endl;
		goto label;
	}
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			for(p=0;p<3;p++)
			{ 
			   if(j!=k&&j!=p&&p!=k)
			   {
			   		if(s1[j]==y[0]&&s1[k]==x[0]&&s2[p]==y[0])
		{
			cout<<"yes"<<endl;
			goto a;
		}
		else if(s1[j]==y[0]&&s2[k]==x[0]&&s2[p]==y[0])
		{
			cout<<"yes"<<endl;
			goto b;
		}
		else if(s1[j]==x[0]&&s2[k]==y[0]&&s2[p]==y[0])
		{
			cout<<"yes"<<endl;
			goto c;
		}
		else
		{
			cout<<"no"<<endl;

		}
			   }
			   else
			   {
			   	cout<<"no"<<endl;
			   
			   }
			   
		}
		}
	}
label:;
a:;
b:;
c:;
d:;
e:;	
}	

	return 0;
}
