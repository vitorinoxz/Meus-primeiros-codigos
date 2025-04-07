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

void selection_sort(int vetor[TAM]){

    int posicaoMenorValor, aux, i, j;

    for(i = 0; i < TAM; i++){
        posicaoMenorValor = i;
        for( j = i + 1; j < TAM; j++){

            if (vetor[j] > vetor[posicaoMenorValor]){
                posicaoMenorValor = j;
            }

        }


        if (posicaoMenorValor != i){
            aux = vetor[i];
            vetor[i] = vetor[posicaoMenorValor];
            vetor[posicaoMenorValor] = aux;

        }

    }




}



int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    selection_sort(vetor);
    
    

    imprimeVetor(vetor);
    
  return 0;
}