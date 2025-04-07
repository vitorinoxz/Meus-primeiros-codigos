#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>



void main () {
      
int dado1, dado2, dado3;

 // Usa o tempo atual commo semente    
 srand(time(NULL));

//  GERa valores aleatorios para cada dado
dado1(rand() % 6) + 1;
dado2(rand() % 6) + 1;
dado3(rand() % 6) + 1;

// soma dos dados 
soma = dado1 + dado2 + dado3;

// exibe resultado
printf("Resultado dos dados: %d, %d, %d\n", dado1, dado2, dado3);
printf("Soma dos valores: %d\n", soma)


return 0;


}