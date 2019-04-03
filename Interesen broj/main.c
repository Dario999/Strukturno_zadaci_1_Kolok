/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен
број на бројот 356). Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот
природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден, да се отпечати соодветна
 порака (Brojot ne e validen).*/
#include <stdio.h>
int main()
{
	int n,i,bc,ob,t,m,cif;
    scanf("%d" , &n);
    if(n<=9)
        printf("Brojot ne e validen");
    else
    {
    	for(i=n-1;i>0;i--)
        {
        	t=i;
            bc=ob=0;
            while(t)
            {
            	cif=t%10;
                ob=ob*10+cif;
                t/=10;
                ++bc;
            }
        if(ob%bc==0)
        {
        	printf("%d" , i);
            break;
        }
        }
    }
}