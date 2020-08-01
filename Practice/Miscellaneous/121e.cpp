#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
    int count=0;
    cin >> s;
    int d=s.length();
     for(int i=0;i<d;)
     {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            i=0;
        }
         else
             i++;  
     }
    if(s.length()==0)
        cout<<"Empty String";
    else
        cout<<s;
    return 0;
}
