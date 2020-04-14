#include<bits/stdc++.h>
#include<stdlib.h>
#include<string>
using namespace std;
#define ull unsigned long long
ull digit_sum(ull x) {
	ull dsum=0;
	while(x>0) {
		dsum+=(x%10);
		x/=10;
	}
	return dsum;	
}
ull all_digit_sum(ull x) {
	if(digit_sum(x)<10)
		return digit_sum(x);
	else
	return all_digit_sum(digit_sum(x));
}
int main(){
	string s;
	long long b;
	cin>>s>>b;
	int c[s.length()];
	for(int i=0;i<s.length();i++)
	{   cout<<s[i]<<" ";
	    c[i]=stoi(s);
	}
	
}

