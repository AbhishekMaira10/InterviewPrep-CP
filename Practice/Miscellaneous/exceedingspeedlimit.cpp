#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,s,x;
cin>>s;
if(s<=90)
{
	cout<<"0"<<" "<<"No punishment"<<endl;
}
else if(s>=91&&s<=110)
{
	x=(s-90)*300;
	cout<<x<<" "<<"Warning"<<endl;
}
else if(s>110)
{
	x=(s-90)*500;
	cout<<x<<" "<<"License removed"<<endl;
}
return 0;
}
