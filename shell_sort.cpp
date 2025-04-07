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

void shell_sort(int vetor[TAM]){
   
   int i, j, atual;
   int h = 1;
   
   while (h < TAM){
     h = 3*h+1;
   }

   while(h > 1){
     h = h / 3;

     for(i = h;  i < TAM; i++){

        //    elemento atual em analise
            atual = vetor[i];
    
            // elemento anterior analisado
            j = i - h;
            
            // analisando membros anteriores
            while ( (j >=0)  && (atual < vetor[j])){
    
            // posiciona os elementos uma posicao a frente
                vetor [j + h] = vetor [j];
    
            // faz o j andar para tras
                j = j - h;
            }
    vetor [j + h] = atual;
    imprimeVetor(vetor);

    }
   }
   
   
   
    
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    shell_sort(vetor);
    
    

    imprimeVetor(vetor);
    
  return 0;
}