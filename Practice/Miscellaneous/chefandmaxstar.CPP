#include <iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=0;
        cin>>n;
        int a[n];
        map<int,int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s[a[i]]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=sqrt(a[i]);j++)
            {
                if(a[i]%j==0)
                {
                    s[j]++;
                    if(a[i]/j!=j)
                        s[a[i]/j]++;
                }
            }
            if(max<s[a[i]])
            {
                max=s[a[i]];
            }
        }
        cout<<max-1<<endl;
        map<int, int>::iterator itr;
        for (itr = s.begin(); itr != s.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    }
    return 0;
}