#include<stdio.h>

#include<string.h>

int main()

{
	
char a[10],b[10];
	
int i,n,j;
	
printf("enter the word required word\n");
	
scanf("%s",&a);

printf("%s",a);

n=strlen(a);

for(i=0;i<n;i++)
        {
		
              b[i]=a[(n-1)-i];

	}
	
printf("the reverse string is: ");
	
for(j=0;j<n;j++)

	{
	   
	 
             printf("%c",b[j]);
	 

        } 

return 0;

}

