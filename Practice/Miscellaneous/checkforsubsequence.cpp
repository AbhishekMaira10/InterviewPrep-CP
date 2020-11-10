#include<bits/stdc++.h>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++)
	{
	    string A, B;
	    cin>>A;
	    cin>>B;
	    int a=0, b=0;
	    while(a<A.length() && b<B.length())
	    {
	        if(A[a] == B[b])
	            a++;
	        b++;
	    }
	    if(a == A.length())
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
}	
