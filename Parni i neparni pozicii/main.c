/*Od tastratura se vnesuvaat nepoznat broj na celi broevi.Vnesuvanjeto zavrshuva koga namesto broj
 ke bide vnesen nekakov znak.Da se napishe programa koja na ekran ke go isecati brojot cij sto zbir
 na cifrite na parnite pozicii e najmal i brojot cij sto zbir na cifrite na neparnite pozicii e
 najgolem.Da se pretpostavi deka poziciite zapocnuvaat od najmalku znacajnata cigra i taa se naoga na pozicija 1.
 Dokolku povekje od dva broja imaat ist najmal zbir na cigri na parni pozicii ili imaat ist najgolem zbir na cifri
 na neparni pozicii ,programata da go ispecati prviot od niv spored redosledot na vnesuvanje*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1,zp,znp,najgolem=0,najmal=0,zp1=0,znp1=0,flag=1;
    while(scanf("%d" , &n))
    {
        zp=znp=0;
        n1=n;
        while(n1)
        {
            znp = znp + n1%10;
            n1/=10;
            zp+=n1%10;
            n1/=10;
        }
        if(flag)
        {
            zp1=zp;
            znp1=znp;
            flag=0;
            najmal=najgolem=n;
        }
        else
        {
            if(zp<zp1)
                {najmal=n; zp1=zp;}
            if(znp>znp1)
                {najgolem=n; znp1=znp;}
        }
    }
    printf("Najmal: %d\nNajgolem: %d" , najmal , najgolem);
return 0;
}
