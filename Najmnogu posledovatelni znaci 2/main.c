#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znak,z,t;
    int np=0,n=1,flag=1;
    while((znak=getchar())!='.')
    {
        if(flag)
        {
            flag=0;
            z=znak;
        }
        else
        {
            if(znak==z)
            {
                ++n;
            if(n>np)
            {
                np=n;
                t=znak;
            }
            }
            else
            {
                n=1;
                z=znak;
            }
        }
    }
    printf("Najmnogu pati e vnesen znakot %c i toa %d pati" , t , np);
}
