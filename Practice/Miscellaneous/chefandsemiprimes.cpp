#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,j,count;
	int a[200]={0},c[1000],count1=0,count3=0;
	cin>>t;
	for(i=2;i<200;i++)
	{
		count=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==1)
		{
			a[i]=i;
			count1++;
		}
	}
	int b[count1];
	j=0;
	for(i=0;i<200;i++)
	{
		if(a[i]>0)
		{
			b[j]=a[i];
			j++;
		}
	}
	while(t--)
	{
		cin>>n;
		int k=0;
        for(i=0;i<count1;i++)
        {
        	for(j=i+1;j<count1;j++)
        	{
        		if(b[i]*b[j]<n)
        		{
        			c[k]=b[i]*b[j];
        			k++;
				}
			}
		}
        for(i=0;i<k;i++)
        {
        	for(j=0;j<k;j++)
        	{
        		if(c[i]+c[j]==n)
        		{
        		   count3++;
				   goto label;    	
				}
			}
		}
		label:;
		if(count3==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		count3=0;
		k=0;
}
return 0;	
}
