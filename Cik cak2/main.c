#include <stdio.h>
int main()
{
    int broj,cif1,cif2,flag,flag1,g,t;
    while(scanf("%d" , &broj))
    {
        flag=0;
        if(broj<10)
            continue;
        else
        {
            t=broj;
            g=broj%10;
            if(g<5)
                flag1=1;
            else
                flag1=0;
            while(t)
            {
                cif1=t%10;
                t/=10;
                cif2=t%10;
                t/=10;
                if(flag1)
                {
                    if(cif2!=0)
                    {
                        if(cif2>=5 && cif1<5)
                        {
                            continue;
                        }
                        else
                        {
                            flag=1;
                            break;
                        }
                    }
                    else
                    {
                        if(cif1<5)
                        {
                            continue;
                        }
                        else
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(!flag1)
                {
                    if(cif2<5 && cif1>=5)
                    {
                          continue;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
        if(!flag)
            printf("%d\n" , broj);
        }
    }
}
