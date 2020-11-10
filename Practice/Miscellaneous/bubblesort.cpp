#include<stdio.h>
void bubble(int [],int);
int main()
{
int a[100],i,n,j;
printf("enter the number of elements of an array:");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
bubble(a,n);
printf("the elements in ascending order are:\n");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
return 0;
}
void bubble(int b[100],int n)
{
int i,j,k;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(b[j]>b[j+1])
{
k=b[j];
b[j]=b[j+1];
b[j+1]=k;
}
}
}
}

