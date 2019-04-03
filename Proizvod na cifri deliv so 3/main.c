/*Da se napishe programa koja od daden opseg na prirodni broevi (pochetokot i krajot na
opsegot se chitaat od standarden vlez) kje gi otpechati na standarden izlez site broevi chii
shto proizvod na cifri dellivi so 3 e pogolem od 5 i deliv so 4. Na kraj kje go otpechati i
vkupniot broj na vakvi broevi.*/
#include <stdio.h>
int main()
{
    int m,n,i,brojac=0,pc,cif,t;
    scanf("%d%d" , &m , &n);
    for(i=m;i<=n;i++)
    {
        pc=1;
        t=i;
        while(t)
        {
            cif=t%10;
            if(cif%3)
                pc=pc*(t%10);
            t/=10;
        }
        if(pc>5 && pc%4==0)
            {printf("%d\n",i); ++brojac;}
    }
    printf("%d" ,brojac);
}
