#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	 int pivot=arr[0];
for(int i=1;i<n;i++){
    if(pivot>arr[i]){
        for(int j=i;j>0;j--){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}



return 0;
}
