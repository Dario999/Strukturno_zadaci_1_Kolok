#include <stdio.h>
int main()
{
    int m,n,i,t;
    scanf("%d" , &m);
    for(i=1;i<=m;i++)
        {
           if(i==1 || i==m)
                printf("%%");
           else
                printf("@");
        }
        printf("\n");
    for(i=1;i<m-1;i++)
        {
            for(t=1;t<=m;t++)
            {
            if(t==m || t==1)
                printf("%%");
            else
                printf(".");
            }
            printf("\n");
        }
    for(i=1;i<=m;i++)
         {
           if(i==1 || i==m)
                printf("%%");
           else
                printf("@");
        }
        printf("\n");
}
