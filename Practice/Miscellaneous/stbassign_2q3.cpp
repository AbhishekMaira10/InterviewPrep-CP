#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,n;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
	cin>>arr[i];
}
sort(arr,arr+n);
i=0,j=n-1; 
    while (i < j) { 
        cout<<arr[j--] << " "; 
        cout<<arr[i++] << " "; 
    }  
    if (n % 2 != 0) 
    cout<<arr[i];
	return 0;
}
