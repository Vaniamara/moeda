#include <stdio.h>
#include<stdlib.h>


int main ( )
{
    double N;
    scanf("%lf",&N);
    int moeda=0,nota=0;
    nota=(N);
    moeda=((N-nota)*100);


    printf("NOTAS:\n");

   printf("%d nota(s) de R$ 100.00\n",nota/100);
   nota=(nota%100);
   printf("%d nota(s) de R$ 50.00\n",nota/50);
   nota=(nota%50);
   printf("%d nota(s) de R$ 20.00\n",nota/20);
   nota=(nota%20);
   printf("%d nota(s) de R$ 10.00\n",nota/10);
   nota=(nota%10);
   printf("%d nota(s) de R$ 5.00\n",nota/5);
   nota=(nota%5);
   printf("%d nota(s) de R$ 2.00\n",nota/2);
   nota=(nota%2);

   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n",nota/1);
   printf("%d moeda(s) de R$ 0.50\n",moeda/50);
   moeda=(moeda%50);
   printf("%d moeda(s) de R$ 0.25\n",moeda/25);
   moeda=(moeda%25);
   printf("%d moeda(s) de R$ 0.10\n",moeda/10);
   moeda=(moeda%10);
   printf("%d moeda(s) de R$ 0.05\n",moeda/5);
   moeda=(moeda%5);
   printf("%d moeda(s) de R$ 0.01\n",moeda/1);




    return 0;
}
