#include<stdio.h>
int main()
{
	char a[100],ch;
	int i,freq=0;
	printf("enter the word to find the freq:\n");
	gets(a);
	
	printf("enter the letter to find the freq:\n");
	scanf("%c",&ch);
	for(i=0;a[i]!='\0';i++)
	{
		if(ch==a[i])
		freq++;
	}
	
	printf("the freq of entered letter is %d\n",freq);
	return 0;
	
}
