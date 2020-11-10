#include<bits/stdc++.h>
using namespace std;
//#define N 2147483648
int main()
{
    long int N = 2147483647;
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long int arr[n];
        long int c_arr[n];
        long int num=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            num = num^arr[i];
            c_arr[i] = num;
        }
        for(int i=0;i<q;i++)
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            long int val=0;
            //for(int j=l;j<=r;j++)
            //    val = val^arr[j];
            val = c_arr[r]^c_arr[l-1];
            if(l==0)
                val = c_arr[r];
            long int ans = N-val;
            cout<<ans<<endl;
        }
    }
    return 0;
}
