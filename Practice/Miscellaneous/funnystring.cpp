#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,l,j,q,count=0;
		cin>>q;
	char s[10000],temp;

	while(q--)
	{
		
	 cin>>s;
	 l=strlen(s);
	 int temp1[l],temp2[l],a[l-1],b[l-1];
	 for(i=0;i<l;i++)
	 {
	 	temp1[i]=s[i];
	 }
	 
	for(i=0;i<l-1;i++)
	{
		a[i]=abs(temp1[i+1]-temp1[i]);
	}
	
	   j = strlen(s) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    	 for(i=0;i<l;i++)
	 {
	 	temp2[i]=s[i];
	 }
	 	for(i=0;i<l-1;i++)
	{
		b[i]=abs(temp2[i+1]-temp2[i]);
	}
	
	for(i=0;i<l-1;i++)
	{
		if(a[i]==b[i])
		{
			count++;
		}
	 }
	 if(count==l-1)
	 {
	 	cout<<"Funny"<<endl;
	  } 
	 else
	 {
	 cout<<"Not Funny"<<endl;
}
count=0;	 
	 
}
	 return 0;
}
