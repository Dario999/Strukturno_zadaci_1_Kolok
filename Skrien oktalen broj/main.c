#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znak;
    int br=0;
    while((znak=getchar())!='.')
    {
        if(znak>='0' && znak<='7')
        {
            printf("%c" , znak);
            br=br*8+(znak-'0');
        }
    }
    printf("\t%d" , br);
}
