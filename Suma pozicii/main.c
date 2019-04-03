#include <stdio.h>
#include <stdlib.h>
/**Da se napishe programa koja od N celi broevi vneseni od tastatura kje ja opredeli
razlikata od sumite na broevite na parni i neparni pozicii (spored redosledod na
vnesuvanje). Ako ovaa razlika e pomala od 10, na ekran se pechati "Dvete sumi se
slicni", a vo sprotivno na ekran se pechati "Dvete sumi mnogu se razlikuvaat.
Zabeleska: Pozicijata na najvaznata cifra e neparna*/
int main()
{
    int broj,n,brcifri,sumap=0,suman=0,i,t,cif;
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d" , &broj);
        brcifri=0;
        t=broj;
        while(t)
        {
            brcifri++;
            t/=10;
        }
        if(brcifri%2==0)
        {
            while(broj)
            {
                cif=broj%10;
                sumap+=cif;
                broj/=10;
                cif=broj%10;
                suman+=cif;
                broj/=10;
            }
        }
        else
        {
            while(broj)
            {
                cif=broj%10;
                suman+=cif;
                broj/=10;
                cif=broj%10;
                sumap+=cif;
                broj/=10;
            }
        }
    }
    if((sumap-suman)<10)
        printf("Dvete sumi se slicni");
    else
        printf("Dvete sumi mn se razlikuvaat");
return 0;
}
