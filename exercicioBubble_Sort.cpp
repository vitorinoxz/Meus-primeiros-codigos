#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <utility>
#define TAM 5

using namespace std;

void imprimeVetor(int vetor[]){
int i;

cout << "\n";
for(i = 0; i < TAM; i++){
    cout << "|" << vetor[i] << "|";
}


}

void bubble_sort(int vetor[TAM]){
  int x, y;

  for (x = 0; x < y; x++ ){

    for( y = x + 1; y < TAM; y++){
       
        if(vetor[x] > vetor [y]){
         swap(vetor[x], vetor[y]);
        }

    }
  }

}

int main(){
    int vetor[TAM] = { };
    int i;

    cout << "digite 5 numeros: ";
    for(i = 0; i < TAM; i++){
        cin >> vetor[i];
    }

   cout << "numeros recebidos: ";
   imprimeVetor(vetor);

   bubble_sort(vetor);

   cout << "numeros ordenados: ";
   imprimeVetor(vetor);

return 0;   
}