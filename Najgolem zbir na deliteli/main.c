#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,max=0,zbir,j,m,broj;
    scanf("%d" , &n);
    for(i=n;i>0;i--)
    {
        zbir=0;
        for(j=1;j<=i;j++)
            if(i%j==0)
                    zbir+=j;
    if(zbir>max)
    {
        broj=i;
        max=zbir;
    }
    }
    printf("Najgolem broj e %d so zbir na deliteli %d" , broj , max);
return 0;
}
