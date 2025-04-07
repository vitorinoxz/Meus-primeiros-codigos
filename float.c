#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main () {

    float vetor[3];
    float soma = 0, media;

    printf("digite 3 valores: ");
    for (int i = 0, i < 3, i++){
       printf("Valor %d: ", i + 1);
       scanf("%f", &vetor[i]);
       soma += vetor[i];

}

media = soma / 3;
 
printf("a media dos valores eh: %2.f", media)

return 0;