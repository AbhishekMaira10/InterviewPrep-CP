#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l,p,t,max;int a[1000][2000];int count;int o=0;
    char s[10000];
    printf("please how many dices you want to use\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=5;j++)
        {

            scanf("%d",&a[i][j]);
        }
    }
     p=1;
     i=0;
     j=0;
   while(i<n)
    {


       while(j<5)
        { count=1;p=1;
        label:;
            for(k=i+1;k<n;k++)
            {
                for(l=0;l<=5;l++)
                {
                    if((a[i][j]+p)==a[k][l])
                    {
                        count++;p++;

                        goto label;
                    }


                }
            } j++; s[o]=count;o++;

        } i++;
    }
    s[o]=('\0');
     max=s[0];
    for(t=0;s[t]!=('\0');t++)
    {
        if (max<s[t+1])
        {
            max=s[t+1];
        }
    }
    printf("%d\n",max);
    return 0;
}






















