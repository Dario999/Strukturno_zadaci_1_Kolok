/*Од стандарден влез се внесуваат два цели броја N и Х.
Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
Задачата да се реши без употреба на низи и матрици.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,x,i,cif,max=0,flag=1,t,q,y;
    scanf("%d%d" , &n , &x);
    for(i=n-1;i>0;i--)
    {
        t=i;
        while(t)
        {
            cif=t%10;
            y=x;
            while(y)
            {
            q=y%10;
           	 	if(cif==q)
                {
                    flag=0;
                    break;
                }
            	else
                {
                    flag=1;
                }
            y/=10;
            }
        if(flag==0)
            break;
        t/=10;
        }
        if(flag)
        {
            max=i;
            break;
        }
    }
    printf("%d" , max);
return 0;
}
