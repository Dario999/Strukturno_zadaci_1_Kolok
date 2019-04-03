#include <stdio.h>
int main()
{
    int broj,max=0,min=0,cif,t,maxbroj,minbroj,flag=1,brojac=0,mincifra=0,maxcifra=0;
    while(scanf("%d" , &broj))
    {
        ++brojac;
        t=broj;
        cif=broj%10;
        if(cif>maxcifra)
            {
                maxcifra=cif;
                max=brojac;
                maxbroj=broj;
            }
        while(t>10)
            t/=10;
        if(flag)
        {
            mincifra=t;
            min=brojac;
            minbroj=broj;
            flag=0;
        }
        else
        {
            if(t<mincifra)
            {
                mincifra=t;
                min=brojac;
                minbroj=broj;
            }
        }
    }
printf("Najgolema najneznacanja cifra ima brojot %d na pozicija: %d\n", maxbroj , max);
printf("Najmala najznacajna cifra ima brojot %d na pozicija: %d" , minbroj , min );
}

