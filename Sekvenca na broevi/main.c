/*Од тастатура се внесува цел број m, а потоа непознат број цели броеви. Да се
испечатат должините на секвенците составени од најмалку два
последователни броја за кои истовремено важи:
• следниот број е строго поголем од претходниот и
• секој од нив има точно m цифри.
Задачата да се реши без користење на низи.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m,b,flag=1,b1,brojac,brojac1,prv,c=1;
    scanf("%d" , &m);
    while(scanf("%d" , &b))
    {
        b1=b;
        brojac=0;
        while(b1)
        {
            brojac++;
            b1/=10;
        }
        if(flag)
        {
            flag=0;
        }
        else
        {
            if(b>prv && brojac==m && brojac1==m)
            {
                c++;
            }
            else
            {
                if(c>=2)
                    printf("%d\n" , c);
                c=1;
            }
        }
        prv=b;
        brojac1=brojac;
    }
    if(c>=2)
        printf("%d" , c);
    return 0;
}
