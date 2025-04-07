#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 10


using namespace std;

// imprime o vetor
void imprimeVetor (int vetor[]){
    int i;
    cout << "\n";
    for(i = 0; i < TAM; i++){
        cout << "|" << vetor [i] << "|";
    }


}


// cria o algoritimo bubble_sort
void bubble_sort(int vetor[TAM]){
    int x, y, aux;
    
    // valor da direita
    for(x = 0; x < TAM; x++){
      
        // valor da esquerda
      for(y = x + 1; y < TAM; y++){
        
        // confere se precisa fazer a troca
        if (vetor[x] > vetor[y]){
           aux = vetor [x];
           vetor[x] = vetor [y];
           vetor [y] = aux;

        }


      }

    }



}

// funcao principal
int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    
    bubble_sort(vetor);

    imprimeVetor(vetor);
    
  return 0;
}