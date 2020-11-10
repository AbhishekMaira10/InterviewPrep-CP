#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,n;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
	cin>>a[i];
}
sort(a,a+n);
cout<<"the smallest element is-"<<a[0]<<endl;
cout<<"the largest element is-"<<a[n-1]<<endl;
return 0;
}
