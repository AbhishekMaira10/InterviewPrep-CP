#include<stdio.h>
#include<string.h>
int check_vowel(char);
int main()
{
int i,j=0;
char s[20],t[20];
printf("enter the word to delete the vowel\n");
gets(s);
for(i=0;s[i]!='\0';i++)
{
    if(check_vowel(s[i])==0)
    {
        t[j]=s[i];
        j++;
    }
}
strcpy(s,t);
printf("string after deleting vowel is:%s\n",s);
return 0;
}

int check_vowel(char c)
{
    switch(c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    return 1;
    default:
    return 0;
    }
}




