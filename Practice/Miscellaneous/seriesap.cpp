#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int n;
	    int d=b-a;
	    cin>>n;
	    cout<<a+(n-1)*d<<endl;
	}
	return 0;
}
