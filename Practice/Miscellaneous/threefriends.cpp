#include<iostream>
using namespace std;
int main(){
	int t,x,y,z;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
		if(((x+y)==z)||((y+z)==x)||((x+z)==y))
			cout<<"yes\n";
        else
            cout<<"no\n";
	
	}
	return 0;
}
