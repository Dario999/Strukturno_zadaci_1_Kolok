/*Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег (почетокот m и крајот
на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“.
Ако не постои таков број, да се испечати NE.*/
#include <stdio.h>
int main()
{
	int m,n,t,cif,flag=0,i;
    scanf("%d%d" , &m ,&n);
    for(i=m;i<=n;i++)
    {
    	t=i;
        flag=1;
        while(t)
        {
        	cif=t%10;
            t/=10;
            if(cif%2!=0)
            {
                flag=0;
                break;
            }
        }
    if(flag)
    {
    	printf("%d" , i);
        break;
    }
    }
    if(!flag)
        printf("NE");
}
