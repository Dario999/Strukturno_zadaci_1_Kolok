#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,t,i,cif,p,j,bd;
    scanf("%d%d%d" , &m ,&n ,&t);       /**t=broj na deliteli*/
    for(i=m;i<=n;i++)
    {
        p=i;
        bd=0;
        for(j=1;j<=p;j++)
        {
            if(p%j==0)
                ++bd;
        }
        if(bd==t)
            printf("%d\n" , i);
    }
return 0;
}
