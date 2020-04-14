#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,te,n,n1,i,j,x,no[26]={0};
	char ch,input[100];
	string output,b;
	cin>>te;
	while(te--)
	{
		cin>>input;
		n=strlen(input);
		 for (i=0;i<n;i++)
   {
      ch = input[i] - 'a';
      no[ch]++;
   }

   t = 0;
      for (ch ='a';ch<='z';ch++)
   {
      x=ch-'a';
 
      for (i = 0;i<no[x];i++)
      {
         output[t] = ch;
         t++;
      }
   }

for(i=0;i<n;i++)
{
	if(output[i]==output[i+1])
	continue;
	else
	{
		b[i]=output[i];
	}
}  
}
	return 0;
}

