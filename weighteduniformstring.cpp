#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n,weight=0;
	cin>>n;	
	int x[n];
	vector<bool> f(10000000);
	for(int i=0;i<s.length();i++)
	{
		weight+=s[i]-'a'+1;
		f[weight]=true;
		if(s[i]!=s[i+1])
		weight = 0;	
	}
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		if(f[x[i]])
		cout<<"Yes"<<endl;
		else 
		cout<<"No"<<endl;
	}
	return 0;
}
		
		

		
		
		
		

