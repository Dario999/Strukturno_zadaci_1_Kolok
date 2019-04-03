/*Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.). Ваша задача е да го
пресметате декадниот збир на внесените хексадецимални цифри. Доколку добиениот декаден збир е делив со 16 се печати Pogodok.
Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), се печати Poln pogodok
 инаку се печати самиот збир.
Пример:

влез: A 7 F 2 0 c A 5

излез: 61

(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tekst;
    int zbir = 0;
    while(scanf("%c", &tekst)) {
        if(tekst == '.')
        {
            break;
        }
        else
        {
            if((tekst >= '0'&& tekst <= '9') || (tekst >= 'A'&&tekst <= 'F') || (tekst >= 'a'&& tekst <= 'f'))
            {
                if(tekst >= '0' && tekst <= '9')
                {
                    zbir += tekst - '0';
                }
                else if(tekst >= 'A' && tekst <= 'F')
                {
                    zbir += tekst - 'A' + 10;
                }
                else
                    zbir += tekst - 'a' + 10;
            }
        }
    }
    if(zbir % 16 == 0 && zbir%100 == 16)
    {
        printf("Poln pogodok");
    }
    else if(zbir % 16 == 0)
    {
        printf("Pogodok");
    }
    else
        printf("%d", zbir);
    return 0;
}
