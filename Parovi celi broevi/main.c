/*Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z, а потоа
последователно се внесуваат парови цели броеви (a, b). Внесувањето на парови цели броеви треба да заврши
кога корисникот ќе го внесе парот (0, 0). Треба да се пресмета колку пати z е еднаков на збирот на секој
 внесен пар броеви a и b, како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z
 (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).*/
 #include <stdio.h>
int main()
{
    int z,a,b,brojac=0,kp=0;
    float procent;
    scanf("%d" , &z);
    scanf("%d%d" , &a , &b);
    while(1)
    {
        if(a==0&&b==0)
            break;
        ++brojac;
        if(a+b==z)
            kp++;
        scanf("%d%d" , &a , &b);
    }
    procent=(kp*1.0/brojac)*100;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n" , kp ,z);
    printf("Procentot na parovi so zbir %d e %.2f%%" , z ,procent);
}