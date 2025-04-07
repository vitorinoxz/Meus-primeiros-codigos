#include <stdio.h>
#include <stdlib.h>
#include <new>
#define TAM 3

void imprimeVetor(int *vetor, int tamanhoDaLista){

    int cont;

    for(cont = 0; cont < TAM; cont ++){
        printf("\nValor %d = %d", cont, vetor[cont]);

      

    } 

}


int* alocaVetor(int tam){
    int *v;
    v = (int*) malloc(tam * sizeof(int));
 return v;
}


int main () {

    int vetor[TAM] = {1,2,3}, cont, tamanhoLista;

    for(cont = 0; cont < TAM; cont ++){
        printf("\nValor %d = %d", cont, vetor[cont]);

    }

    

    for(cont = 0; cont < TAM; cont ++){
        scanf ("%d", &vetor[cont]);

    }
    
    imprimeVetor(vetor, 3);
    printf("digite o tamanho do vetor:" );
    scanf("%d", &tamanhoLista);

    
    
    // dados fornecidos pelo usario
    int *vetorLido;

    vetorLido = alocaVetor (tamanhoLista);

    
    for(cont = 0; cont < TAM; cont ++){
        scanf ("%d", &vetorLido[cont]);

    }


 return 0;
}