#include<stdio.h>
void merge(int[],int,int[],int,int[]);
int main()
{
    int a[5],b[5],m,n,x[10],c;
    printf("this is a program to merge two sorted arrays\n");
    printf("enter the number of elements for first array:\n");
    scanf("%d",&m);
    printf("enter %d integers:\n");
    for(c=0;c<m;c++)
    {
        scanf("%d",&a[c]);
    }
    printf("enter the number of elements for second array:\n");
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&b[c]);
    }
    merge(a,m,b,n,x);
    printf("the sorted array is:\n");
    for(c=0;c<m+n;c++)
    {
        printf("%d\n",x[c]);
    }
    return 0;
}
void merge(int a[],int m,int b[],int n,int x[])
{
    int i,j,k;
    i=j=k=0;
    for(i=0;i<m+n;)
    {
        if(j<m&&k<n)
        {
            if(a[j]<b[k])
            {
                x[i]=a[j];
                j++;
            }
            else{
                x[i]=b[k];
                k++;
            }
            i++;
        }
        else if(j==m)
        {
            for(;i<m+n;)
            {
                x[i]=b[k];
                k++;
                i++;
            }

            }
        else
            {
            for(;i<m+n;)
            {
                x[i]=a[j];
                j++;
                i++;
            }
        }
    }
}
