#include<stdio.h>
void exchange(int *a,int *b);
int main()
{
int x,y;
x=100;
y=200;
printf("the value of x and y before swapping:x =%d and y=%d\n",x,y);
exchange(&x,&y);
printf("the value of x and y after swapping:x =%d and y=%d\n",x,y);
return (x,y);
}
exchange(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
