#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,flag=1;
    scanf("%d%d" , &m , &n);
    for(i=1;i<=m;i++)
    {
        flag=1;
        for(j=1;j<=n;j++)
    {
        if(i%2!=0)
        {
            if(flag)
            {
                printf(".");
                flag=0;
            }
            else
            {
                printf("*");
                flag=1;
            }
        }
        else
        {
            if(flag)
            {
                printf("*");
                flag=0;
            }
            else
            {
                printf(".");
                flag=1;
            }
        }
    }
    printf("\n");
    }
}
