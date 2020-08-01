#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max (int a,int b){return a>b?a:b;}



int main() {
    string s2,s1;int a[123]={0},b[123]={0},cnt=0;
    cin>>s1>>s2;
     for(int j=0;j<max(s1.size(),s2.size());j++)
                 {
         a[s1[j]]++;b[s2[j]]++;}
      
            for(int j=97;j<123;j++)
                if(a[j]!=b[j])
                    cnt+=abs(a[j]-b[j]);
                cout<<cnt;
    return 0;
}
