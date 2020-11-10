#include <bits/stdc++.h>
using namespace std;
bool diff(int big[],int small[])
{
	int d=0,i;
	for(i=0;i<3;i++)
	{
		if(big[i]>small[i])
			d++;
		else if(big[i]<small[i])
			return false;
	}
	if(d>=1)
		return true;
	else
		return false;
}

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--)
	{
		int a1[3],a2[3],a3[3];
		cin>>a1[0]>>a1[1]>>a1[2];
		cin>>a2[0]>>a2[1]>>a2[2];
		cin>>a3[0]>>a3[1]>>a3[2];
		if(diff(a2,a1)&&diff(a3,a2) || diff(a3,a1)&&diff(a2,a3) || diff(a3,a2)&&diff(a1,a3) || diff(a1,a2)&&diff(a3,a1) || diff(a2,a3)&&diff(a1,a2) || diff(a1,a3)&&diff(a2,a1))
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
