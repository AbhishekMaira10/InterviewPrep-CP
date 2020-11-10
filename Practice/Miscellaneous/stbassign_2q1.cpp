#include<bits/stdc++.h>
using namespace std; 
int find_Peak(int arr[],int low,int high,int n) 
{ 
    int mid=(low+high)/2;
    if ((mid == 0 || arr[mid-1] <= arr[mid]) && 
            (mid == n-1 || arr[mid+1] <= arr[mid])) 
        return mid;  
    else if (mid > 0 && arr[mid-1] > arr[mid]) 
        return find_Peak(arr,low,(mid -1),n); 
    else return find_Peak(arr, (mid + 1), high, n); 
}
int fun(int arr[], int n) 
{ 
    return find_Peak(arr, 0, n-1, n); 
}
int main() 
{ 
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    cout<<arr[fun(arr,n)]<<endl; 
    return 0; 
}
