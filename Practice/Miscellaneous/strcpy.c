#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="c programming";
	char b[50];
	strcpy(b,a);
	printf("a:%s",a);
	printf("b:%s",b);
	return 0;
}
