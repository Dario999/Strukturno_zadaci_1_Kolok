#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,cif,t,i,flag=1;
    scanf("%d%d" , &m , &n);
    for(i=m;i<=n;i++)
    {
        t=i;
        while(t)
        {
            cif=t%10;
            if(cif!=0)
                {if(i%cif==0)
                    flag=1;
                else
                    {flag=0; break;}}
            t/=10;
        }
        if(flag)
            printf("%d\n" , i);
    }
return 0;
}
