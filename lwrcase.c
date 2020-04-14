#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	gets(a);
	printf("%s\n",strupr(a));
	printf("%s\n",strlwr(a));
	return 0;
}
