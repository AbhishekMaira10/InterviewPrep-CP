#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,m,j;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>m;
    string t[m];
    for(i=0;i<m;i++)
    {
        cin>>t[i];
    }
    for(i=0;i<m;i++)
    {
        int flag=0;
        for(j=0;j<n;j++)
        {
            if(t[i]==s[j])
                flag++;
        }
        cout<<flag<<"\n";
    }
    return 0;
}

