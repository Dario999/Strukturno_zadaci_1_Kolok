#include <stdio.h>
#include <stdlib.h>
/*Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст
се скриени цели броеви (помали од 100). Да се напише програма што ќе ги прочита сите знаци и на
 излез ќе го испечати збирот на сите броеви скриени во текстот.*/
#include <stdio.h>
 int main()
 {
    char c;
    int zbir=0,br=0,x;

    while((c=getchar())!='!'){
        if((c>='0')&&(c<='9')){
            x=c-'0';
            br=br*10+x;
        }
        else {
            zbir+=br;
            br=0;
        }
    }
    printf("%d", zbir+br);
}