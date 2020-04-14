#include<stdio.h>
int main()
{
int a[5],*p,i,j=0,sum=0;
printf("enter an array to be added:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

p=&a;
while(j<5)
{
sum=sum+*p;
j++,p++;
}
printf("the final sum is:%d\n",sum);
return 0;
}
