#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
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
		all_digit_sum(digit_sum(x));
}
int main() {
	int t;
	ull n,k,k1,d,d_sum,count=0,min_dsum;
	cin>>t;
	while(t--) {
		cin>>n>>d;
		k=n;
		d_sum=all_digit_sum(n);
		min_dsum=d_sum;
		while(all_digit_sum(n+d)!=d_sum) {
			n=n+d;
			if(all_digit_sum(n)<min_dsum)
				min_dsum=all_digit_sum(n);
		}
		while(d_sum!=min_dsum) {
			k=k+d;
			count++;
			d_sum=all_digit_sum(k);
		}
		k1=k;
		if(k1<=9)
		{
			count=0;
		}		
		while(k>9) {
			count++;
		    k=digit_sum(k);
		}
		cout<<min_dsum<<" "<<count<<endl;
		count=0;
	}
	return 0;
}
