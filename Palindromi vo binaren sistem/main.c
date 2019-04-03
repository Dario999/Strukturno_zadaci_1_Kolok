#include <stdio.h>
#include <stdlib.h>

int main () {
     int from,to,i,pom,cifra,poz;
     long int bin,bin2,op;
     printf("Vnesete interval:\n");
     scanf("%d%d",&from,&to);
     for(i=from;i<=to;i++) {
         pom=i;
         bin=0;
         poz=1;
         while(pom)
         {
             cifra=pom%2;
             bin+=cifra*poz;
             poz*=10;
             pom/=2;
         }
         bin2=bin;
         op=0;
         while(bin2) {
             cifra=bin2%10;
             op=op*10 + cifra;
             bin2/=10;
         }
         if(bin==op)
            printf("Dekadniot broj %d, pretvoren vo binaren broj e palindrom i e %d.\n",i,bin);
     }
     return 0;
 }
