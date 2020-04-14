#include<iostream>
//impllicit typecasting
using namespace std;
int myfunc(int a)
{
	cout<<a;
}
int main()
{
	float a;
	 cin>>a;
	 myfunc(a);
	 return 0;
	 
}
