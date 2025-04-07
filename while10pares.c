#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>



void main () {

    int num, i = 10;

    printf("digite um numero maior ou igual a dez:");
    scanf("%d", &num);

if (num < 10){
    printf("o numero deve ser maior ou igual a dez.");
    return 1; 
}

while (i <= num ){
    printf("%d", i);
    i += 2;
}

printf("!");

return 0;

}







