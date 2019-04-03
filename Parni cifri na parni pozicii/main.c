/*Да се напише рекурзија која за даден цел број ќе формира нов број составен само од
парните цифри на парни позиции.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,broj=0,cif;
    scanf("%d" , &n);
    n/=10;
    while(n)
    {
        cif=n%10;
        if(cif%2==0)
        {
            broj=broj*10+cif;
        }
        n/=100;
    }
    printf("%d" , broj);
}
