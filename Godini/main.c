/*Од стандарден влез се чита еден број кој претставува датум во формат DDMMYYYY
(DD-ден, MM-месец, YYYY-година) кој го означува денешниот датум. Потоа се
вчитува цел број N, по кој се вчитуваат N датуми на раѓање во дадениот
формат. За секој од прочитаните N датуми на раѓање треба да се отпечати "DA"
ако на денешниот ден (вчитан на почетокот) има повеќе или точно 18 години,
а во спортивно "NE".*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date,d,m,g,dd,mm,gg,n,i,w;
    scanf("%d" , &date);
    d=date/1000000;
    m=(date/10000)%100;
    g=date%10000;
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d" , &date);
        dd=date/1000000;
        mm=(date/10000)%100;
        gg=date%10000;
        w=g-gg;
        if(w<18)
            printf("NE\n");
        else if(w==18)
        {
            if(mm<m)
                printf("DA\n");
            else if(mm==m)
            {
                if(dd<=d)
                    printf("DA\n");
                else
                    printf("NE\n");
            }
            else
                printf("NE\n");
        }
        else
            printf("DA\n");
    }
}
