#include <stdio.h>
#include <stdlib.h>
/*
    +***+
    +%%%+
    +%%%+
    +%%%+
    +***+
*/
int main()
{
    int m,i,j;
    scanf("%d" , &m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        if(j==1 || j==m )
            printf("+");
        else if( i==1 && j>1 && j<m || i==m && j>1 && j<m)
            printf("*");
        else
            printf("%%");
        printf("\n");
    }
}
