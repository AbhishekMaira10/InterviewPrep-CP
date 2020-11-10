#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	int i,n,j;
	printf("enter the word required word\n");
	scanf("%s",&a);
	n=strlen(a);
	printf("the value of n is%d\n",n);
	for(i=0;i<n;i++)
	{
		b[i]=a[(n-1)-i];
	}
	for(j=0;j<n;j++)
	{
	    printf("the reverse string is:%s\n",a[j]);
    }
return 0;
}


