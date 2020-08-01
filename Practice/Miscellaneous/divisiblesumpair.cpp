#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,a,count=0;
	cin>>n>>k;
	int ar[n];
		for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){

            a = ar[i] + ar[j];
            if (a % k == 0){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
