#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

void imprimeVetor(int *vetor, int tamanho){

  int i;
  
  for(i = 0; i < tamanho; i++){
  printf("%d", vetor[i]);
  }

}

void modificaVetor(int *vetor, int tamanho){
    int i;

    for (i = 0; i < tamanho; i++){
      vetor[1] = vetor[1] + 1;
    }
    

}

int main () {
  
    int v[3] = {1,2,3};

    imprimeVetor(v, 3);

    modificaVetor(v, 3);

    imprimeVetor(v, 3);

return 0;
}