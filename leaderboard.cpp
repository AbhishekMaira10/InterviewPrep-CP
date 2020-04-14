#include<iostream>w
using namespace std;
int main()
{
int n,m,score[10],alice[10],i,j,rank[10];
cout<<"enter the initial number of players"<<endl;
cin>>n;
int point=n-1;
cout<<"enter their scores:"<<endl;
for(i=0;i<n;i++)
{
	cin>>score[i];
	}

	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			rank[i]=1;
		}
		else
		if(score[i]=score[i-1])
		{
			rank[i]=rank[i-1];
		}
		else
		rank[i]=rank[i-1]+1;
		}	
	
cout<<"enter the levels played by alice:"<<endl;
cin>>m;
cout<<"enter the scores of alice:";
	for(i=0;i<m;i++)
{
	cin>>alice[i];
	}
for(j=0;j<m;j++)
{
	int current_rank;
	while(alice[j]>score[point]&&point>=0)
	{
		point--;
	}
	if(point==-1)
	{
		current_rank=1;
	}
	else
	if(alice[j]=score[point])
	{
	current_rank=rank[point];
}
else if(alice[j]<score[point])
{
	current_rank=rank[point]+1;
}
cout<<"the current rank is:"<<current_rank<<endl;

	}	
	
return 0;
}
