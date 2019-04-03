#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,t=1,o;
    scanf("%d%d" , &m , &n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n-t;j++)
        {
            printf("*");
        }
    for(o=1;o<=t;o++)
        printf("+");
    printf("\n");
    ++t;
    }
return 0;
}
