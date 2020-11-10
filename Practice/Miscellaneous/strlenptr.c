#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],*p;
	int i,count=0,length;
	printf("input a character:\t");
	gets(a);
	p=&a;
	while(*p!='\0')
	{
		count++;
		p++;
	}
	length=count;
	printf("the length of the string is%d",count);
	return 0;
	
}
