#include<iostream>
using namespace std;
int main()
{

    long int fir,sec;int flag=0;
    cin>>fir;
    cin>>sec;

    for(int i=fir;i<=sec;i++)
        { if(i!=1)
            {
        long int num=i*i;long int l,r;
        long int n=num;int count=0;
       while(n>0)
           {
           n=n/10;
           count++;
       }
        if(count%2==0)
            {
            l=r=count/2;
        }
        else 
            {
            l=((count/2)+1);
        }
        long int l2,r2;long int y=num;
        l2=num/(pow(10,l));
        r2=y-(l2*pow(10,l));
        long int sum=l2+r2;
        if(sum==i)
            {
            cout<<i<<" ";flag=1;
        }
        }
         else
             {
             cout<<1<<" ";
         }
    }
    if(flag==0)
        {
       cout<<"INVALID RANGE"<<endl;
    }
    return 0;
}
