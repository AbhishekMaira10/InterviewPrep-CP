
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() 
{
    int n,i,j,size,count;
    int mask[26];
    char s[100];
    count=0;
    for(i=0;i<26;i++)
        {
            mask[i]=0;
        }
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>s;
            size=strlen(s);
            for(j=0;j<size;j++)
                {
                    if(mask[abs(s[j]-'a')]==i)
                        mask[abs(s[j]-'a')]++;
                }
       }
    for(i=0;i<26;i++)
        {
            if(mask[i]==n)
                count++;
        }
    cout<<count;
    return 0;
}
