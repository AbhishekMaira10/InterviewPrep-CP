#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ll a,b,i,c,d,sqrta;
    cin>>t;
    while(t--){
    	c=0;
    	cin>>a>>b;
    	sqrta=floor(sqrt(a));
    	for(i=1;i<=sqrta;i++){
		
    		if(a%i==0){
    		d=a/i;
    		if(i%b==0)
    		c++;
    		if((d%b==0)&&(i!=d))
    		c++;
			}
    	
		}
		cout<<c<<"\n";
    	
	
    
    
}
    return 0;
}
