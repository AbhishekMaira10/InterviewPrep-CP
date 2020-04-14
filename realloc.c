#include <stdlib.h>
#include <stdio.h>
int main(){
int *ip;
int i;
ip = (int*)malloc(4 * sizeof(int));
printf("enter");
for (i=0; i < 4; i++)
scanf("%d",(ip+i));
for (i=0; i < 4; i++)
printf("buffer[%d] = %d\n", i,ip[i]);

ip = (int*)realloc(ip, 2* sizeof(int));
printf("RE enter");
for (i=0; i < 2; i++)
scanf("%d",(ip+i));
for (i=0; i < 2; i++)
printf("buffer[%d] = %d\n", i,ip[i]);
}
