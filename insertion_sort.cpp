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

void insertion_short(int vetor[TAM]){
    int i, j, atual;

    for(i = 1;  i < TAM; i++){

    //    elemento atual em analise
        atual = vetor[i];

        // elemento anterior analisado
        j = i - 1;
        
        // analisando membros anteriores
        while ( (j >=0)  && (atual < vetor[j])){

        // posiciona os elementos uma posicao a frente
            vetor [j + 1] = vetor [j];

        // faz o j andar para tras
            j = j - 1;
        }

        
        //Agora que o espaço foi aberto, colocamos o atual (Menor número) na posição correta

        vetor[j + 1] = atual;
       
        // imprime a lista atualizada
        imprimeVetor(vetor);

    }

 

}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    insertion_short(vetor);
    
    

    imprimeVetor(vetor);
    
  return 0;
}