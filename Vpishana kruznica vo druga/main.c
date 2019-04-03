#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int n,i;
    float x1,y1,x2,y2,r1,r2,d;
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
        scanf("%f%f%f%f%f%f" , &x1 ,&y1 ,&r1 ,&x2 , &y2 ,&r2);
        d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
        if(r1>r2)
        {
            if(r1>(d+r2))
                printf("Vtorata vo pvata");
            else
                printf("NE");
        }
        else
        {
            if(r2>(d+r1))
                printf("Prvata vo vtorata");
            else
                printf("NE");
        }
    }
}
