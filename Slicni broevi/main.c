#include <stdio.h>

int main()
{
    int j,n,x;
    scanf("%d%d",&n,&x);
    for(j=n+1; ; j++)
    {
        int valid=1; //Доколку ова е 1, најден е сличен број
        int pomosenx=x; //Променлива за вадење на цифрите од x
        while(pomosenx>0) // Ја проверуваме секоја цифра од x
        {
            int najdenacifra=0; //Дали таа цифра од x е најдена
            int pomosenn=j; //Променлива за вадење на цифри од j (бројачот)
            while(pomosenn>0) //Ги проверуваме цифрите од j
            {
                if(pomosenn%10==pomosenx%10) //Доколку најдеме барем една слична, najdenacifra ќе е различно од 0
                    najdenacifra++;
                pomosenn/=10;
            }
            pomosenx/=10;
            if(!najdenacifra) //Доколку не се најде слична цифра, значи бројот не е сличен
                valid=0;
        }
        if(valid) //Доколку најдеме сличен број, принтаме решение, завршуваме
        {
            printf("%d",j);
            break;
        }
    }
    return 0;
}
