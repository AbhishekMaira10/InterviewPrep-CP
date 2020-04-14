#include<iostream>
using namespace std;
int arr(int x)
{
    int sum=0,i,a[x];
    for(i=0;i<x;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<x;i++)
    {
        sum=sum+a[i];
    }
    
    return sum;
}
int main()
{
    int n,add;
    cin>>n;
    cout<<arr(n);
    return 0;
}

