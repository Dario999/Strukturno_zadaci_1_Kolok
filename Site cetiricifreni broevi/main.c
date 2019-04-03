#include <stdio.h>
#include <stdlib.h>
/*Da se napishe programa koja na ekran kje gi ispechati site chetiricifreni
broevi kaj koi zbirot na trite najmalku znacajni cifri e ednakov so najznacajnata cifra.*/
int main()
{
    int i,t,cif,suma;
    for(i=1000;i<=9999;i++)
    {
        suma=0;
        t=i;
        while(t>9)
        {
            suma+=(t%10);
            t/=10;
        }
        if(suma==t)
            printf("%d\n" , i);
    }
}
