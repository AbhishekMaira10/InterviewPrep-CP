#include<stdio.h>
int main()
{
	int a[100],i,n,*p;
printf("enter the number of elemnts in array:\n");
scanf("%d",&n);
printf("enter the elements of the array:\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
*p=&a;
for(i=0;i<n;i++)
{
	p[i]=a[n-i-1];
	
}
for(i=0;i<n;i++)
{
printf("the reverse array is: %d\n",*p);
p++;
}
return 0;
}



