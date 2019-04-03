#include <stdio.h>
#include <stdlib.h>
/*Од СВ се вчитуваат n цели броеви и еден број m во опсегот од 0 до 9. Да се напише програма, која од n-те броеви внесени од тастатура
ќе го исфрли бројот m и ќе испечати колку вкупно пати тој е исфрлен*/
int main()
{
    int n,m,i,a,pom,x;
    int broj=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        pom=1;x=0;
    while(a!=0)
    {
    if(a%10==m)
    {
        broj++;
    }
    else
    {
        x+=pom*(a%10);
        pom*=10;
    }
        a/=10;
    }
    printf("%d ",x);
    }
    printf("\n%d",broj);
return 0;
}
