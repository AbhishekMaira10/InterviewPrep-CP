#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull gcd(ull a,ull b)
{
	ull c=(pow(10,9)+7);
	if(b==0)
		return a%c ;
	else
		return gcd(b,a%b);
}
int main(){
    ull i,j,n,a,b,x,y,temp;
	cin>>n>>a>>b;
	int count=0;
	temp=n;
	 while(temp!= 0){
        temp /= 10;
        ++count;
    }
    x=n;
    y=n;
	 for(i=1;i<a;i++) 
	{
    	x=x*pow(10,count);
    	x=x+n;		
	}
	    for(i=1;i<b;i++)
    {
    	y=y*pow(10,count);
    	y=y+n;
	}
    cout<<gcd(x,y);
return 0;
}

	
	
