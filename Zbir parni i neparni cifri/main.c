#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,zp,zn,i,cif,t;
    scanf("%d%d" , &m ,&n);
    for(i=m;i<=n;i++)
    {
        zp=zn=0;
        t=i;
        while(t)
        {
        cif=t%10;
        if(cif%2==0)
            zp+=cif;
        else
            zn+=cif;
        t/=10;
        }
        if(zp==zn)
            printf("%d\n" , i);
    }
return 0;
}
