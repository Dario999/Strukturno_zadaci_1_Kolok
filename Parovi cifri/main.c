/*Da se napishe programa vo koja od standarden vlez prvo se vnesuva eden
pozitiven cel broj z, a potoa povekjepati ednopodrugo se vnesuva par od
celi broevi (a,b). Pritoa, povtoruvanjeto treba da se zavrshi koga koricnikot
kje go vnese parot (0,0). Programata treba da presmeta kolku pati z e
ednakov na zbirot na vnesenite broevi a i b, kako i kolkav procent od vnesenite
parovi (a,b) davaat zbir z*/
#include <stdio.h>
int main()
{
    int z,a,b,brojac=0,kp=0;
    float procent;
    scanf("%d" , &z);
    scanf("%d%d" , &a , &b);
    while(a!=0 && b!=0)
    {
        ++brojac;
        if(a+b==z)
            kp++;
        scanf("%d%d" , &a , &b);
    }
    procent=(kp*1.0/brojac)*100;
    printf("Vnesovte %d parovi so zbir %d\n" , kp ,z);
    printf("Procentot na parovi so zbir %d e: %.2f%%" , z ,procent);
}
