#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj,flag=0,i;
    scanf("%d" , &broj);
    for(i=2;i<broj;i++)
    {
        if(broj%i==0)
        {flag=1; break;}
    }
    if(flag)
        printf("Brojot %d ne e prost" ,broj);
    else
        printf("Brojot %d e prost" , broj);
}
