#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,d,diff;
	cin>>n>>d;
	int a[n],i,count=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n-1;)
	{
		diff=a[i+1]-a[i];
		if(diff<=d)
		{
			count++;
			i+=2;	
		}
		else
		i++;
	}
	cout<<count<<endl;
	return 0;
}
	
