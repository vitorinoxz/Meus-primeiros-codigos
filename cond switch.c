#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void main () {

float a, b;
int opcao;
float resultado;

scanf ("%f %f", &a, &b);

printf ("\nescolha a operacao: \n");
printf("1 - somar \n");
printf("2 - subtrair\n");

printf("\ndigite a opcao:\n");
scanf ("%f", &opcao);

switch (opcao){
    case 1 :
         resultado = a + b 
         printf("\nresultado da soma: %.2f\n");
         break ;
 
    case 2 :
        resultado = a - b 
        printf("\nresultado da subtracao:%.2f\n");
        break ;

    default 
    printf("\nopcao invalida\n");
    break ;
}

return 0;

}
