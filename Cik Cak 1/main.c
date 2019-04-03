#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj,cif1,cif2,flag,flag2,t,f=1;
    while(scanf("%d" , &broj))
    {
        f=1;
        flag=0;
        if(broj<10)
            continue;
        else
        {
            t=broj;
            while(t)
            {
                if(f)
                {
                    cif1=t%10;
                    t/=10;
                    cif2=t%10;
                    t/=10;
                    if(cif1>cif2)
                        flag2=1;
                    else if(cif1==cif2)
                        break;
                    else
                        flag2=0;
                    f=0;
                }
                else
                    t/=10;
                if(cif1==cif2)
                {
                	flag=0;
                    break;
                }
                if(flag2)
                {
                    if(cif1<cif2)
                        {flag=0; break;}
                    cif1=cif2;
                    cif2=t%10;
                    flag2=0;
                    flag=1;
                }
                else
                {
                    if(cif1>cif2)
                    	{flag=0; break;}
                    cif1=cif2;
                    cif2=t%10;
                    flag2=1;
                    flag=1;
                }
            }
        if(flag)
            printf("%d\n" , broj);
        }
        }
    }
