#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){

 int *aux;
 aux = (int*) malloc (tamanho * sizeof(int));


 return aux;

}


int main () {


    int *vetor, tamanho, cont;
    
    printf("digite um tamanho para o vetor:");
    scanf("%d", &tamanho);

    vetor = alocaVetor(tamanho);

    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;

   

   for (cont = 0; cont < tamanho; cont++){
        printf("%d", vetor[cont]);

    }

    free(vetor);








return 0;
}