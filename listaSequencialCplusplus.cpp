#include <stdio.h>
#include <stdlib.h>
#include <new>
#define TAM 3

void imprimeVetor(int *vetor, int tamanhoLista){

    int cont;

    for(cont = 0; cont < TAM; cont ++){
        printf("\nValor %d = %d", cont, vetor[cont]);

      

    } 

}



int main () {

    int cont;
    int *vetorEmCplus = new int[5];
    int vetor[TAM] = {1,2,3}, tamanhoLista;


    for(cont = 0; cont < TAM; cont ++){
     scanf ("%d", &vetorEmCplus[cont]);
    }

   imprimeVetor(vetorEmCplus, 5);
}


