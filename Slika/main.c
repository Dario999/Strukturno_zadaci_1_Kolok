#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d" , &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            if(j==1 || j== n || i==1 || i==n)
                printf("*");
            else
                printf("+");
        }
        printf("\n");
    }
}
