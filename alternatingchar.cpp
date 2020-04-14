#include<bits/stdc++.h>
using namespace std;
int main()
{
char str[100000];
long int len;
int t, i, j,dcount;
scanf("%d", &t);
while(t--){
scanf("%s", str);
len = strlen(str);
dcount = 0;
    i=0;j=1;
    while(j<len){
    if(str[i]==str[j]){
    dcount++;
        j++;
    }
        else{
            i=j;
            j++;
        }
    }

    printf("%d\n", dcount);
}
return 0;
}
