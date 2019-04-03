#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,broj1,broj2,t,cif,nb,bc,y,i;
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
        bc=0;
        scanf("%d%d" , &broj1 , &broj2);
        cif=broj1%10;
        broj1/=10;
        t=broj1;
        while(t)
        {
            bc++;
            t/=10;
        }
        nb=(cif*pow(10,bc))+broj1;
    if(nb>broj2)
        printf("DA");
    else
        printf("NE");
    }
}
