#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	bool isprime[1000005]={0};
    for(int i=2;i<=1000000;i++)
        isprime[i] = true;
    for(int i=2;i<=1000000;i++){
        if(isprime[i]){
            for(int j=i+i;j<=1000000;j+=i)
                isprime[j] = false;
        }
    }
	cin>>t;  
	while(t--)
	{
		cin>>n;
		if(n==2||n==3||n==1)
		cout<<-1<<endl;
		else if(n%2==0)
		cout<<1<<endl;	
		else
		{
			if(isprime[n-2]==1)
			cout<<1<<endl;
			else
			cout<<2<<endl;
		}
	}
		return 0;
	}
