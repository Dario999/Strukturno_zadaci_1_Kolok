/*Да се напише програма која ќе ги отпечати сите прости броеви од даден опсег (почетокот и крајот на опсегот се читаат од СВ) кои се составени само од
непарни цифри. На крајот да се испечати бројот на прости броеви кои го задоволуваат условот.
За еден број велиме дека е прост доколку има точно два (различни) делители (1 и самиот тој број).*/
#include <stdio.h>
int main()
{
    int a,b,i,x=0,flag,n,p,v,i2;
    scanf("%d%d" , & a, &b);
    for(i=a;i<=b;i++)
    {
        i2=i;
        while(i2!=0)
        {
            p=i2%10;
            v=1;
            if(p%2==0)
               {
                    v=0;
                    break;
               }
            else
                i2/=10;

        }
        if(v)
        {
            for(n=2;n<i;n++)
            {
                flag=1;
                    if(i%n==0)
                    {
                        flag=0;
                        break;
                    }
            }
            if(flag)
                {
                    x++;
                    printf("%d\t" , i);

                }
        }
    }
    printf("\n%d" , x);
}
