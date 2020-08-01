#include <iostream>
using namespace std;

bool buy(int p[], int c[], int pages, int price, int n){
    for(int i=0; i<n; i++){
        if(p[i]>=pages && c[i]<=price)
            return true;
    }
    return false;
}

int main() {
	int t, x, y, k, n, p[100000], c[100000];
	cin>>t;
	while(t--){
	    cin>>x>>y>>k>>n;
	    for(int i=0; i<n; i++)
	        cin>>p[i]>>c[i];
	    if(buy(p,c,(x-y),k,n)) cout<<"LuckyChef"<<endl;
	    else cout<<"UnluckyChef"<<endl;
	}
	return 0;
}
