#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>



void main () {
      
// Usa o tempo atual commo semente    
srand(time(NULL));


 // Cria um numero aleatorio 
 int r = rand() % 10;

 // GERAR NUMERO RANDOM
 printf("numero gerado: %d", r);

 return 0;
}