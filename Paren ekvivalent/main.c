/*Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед.
Соодветно да се испечатат пораки „PAREN“ и „NE“.
Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,t,flag=0,o,p;
    scanf("%d%d" , &m , &n);
    if(m>n)
    {
        t=m;
        m=n;
        n=t;
    }
    if(m<=0 || n<=0)
        printf("Invalid input");
    else
    {
        while(m)
        {
            n/=10;
            o=m%10;
            p=n%10;
            if(o!=p)
            {
                flag=1;
                printf("NE");
                break;
            }
            m/=10;
            n/=10;
        }
    if(flag==0)
        printf("PAREN");
    }
}

