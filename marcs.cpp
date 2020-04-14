#include<bits/stdc++.h>
using namespace std;
int main()
{ 
long int n,done,miles=0; 
scanf("%ld",&n); 
int cal[n], temp; 
while(1)
{
    done=1;
    for(int i=0; i<n-1; i++)
    {
        if(cal[i]<cal[i+1])
        {
            temp=cal[i];
            cal[i]=cal[i+1];
            cal[i+1]=temp;
            done=0;
        }
    }
    if(done==1)
    break;
}

for(int i=0; i<n; i++)
miles+=pow(2,i)*cal[i];
printf("%ld",miles);
return 0;
}
