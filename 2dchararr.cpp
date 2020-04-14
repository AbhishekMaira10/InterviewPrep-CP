#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	char s[n][200];
	for(i=0;i<n;i++)
	{
			cin>>s[i];
	}
	cout<<s[0][1]<<" "<<s[1][1]<<endl;
	int m,l;
	m=s[0][1]-'a';
	cout<<m<<endl;
	l=strlen(s[0]);
	cout<<l<<endl;
	cout<<s[0][5];
}



