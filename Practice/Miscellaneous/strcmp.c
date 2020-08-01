#include<stdio.h>
int main()
{
 char a[100],b[100];
 printf("enter the first string\n");
 gets(a);
 printf("enter the second string\n");
 gets(b);
 if(strcmp(a,b)==0)
 printf("strings are equal\n");
 else
 printf("entered stings are not equal\n");
 return 0;
}
