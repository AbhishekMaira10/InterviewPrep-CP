#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t;
	cin>>t;
	while(t--){
		long n,s,k,sum,count;
		cin>>n>>s>>k;
		long c[100000];
		sum=0;count=0;
		for (long i = 0; i < n; i++) {
		    cin>>c[i];
		    sum+=c[i];
		}
		if(sum>=s){
		    cout<<count<<endl;
		}else{
		    while(sum<s){
		        sum+=k;
		        count++;
		    }
		    cout<<count<<endl;
		}
	}
	return 0;
}
