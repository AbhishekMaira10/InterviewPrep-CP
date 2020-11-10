#include<stdio.h>
void bubble(int[],int);
int main()
{
int a[100],i,n,j;
printf("enter the number of elements of an array:");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
(
a[i]=rand()%100;
)
bubble(a,n);
printf("the elements in ascending order are:\n");
return 0;
}
void bubble(int b[100],int n)
{
int i,j,k;
for(i=0,i<n-1,i++)
{
for(j=0;j<n-i-1;j++)
{
if(b[j]>b[j+1])
{
k=a[j];
a[j]=a[j+1];
a[j+1]=k;
}
}
}
}
