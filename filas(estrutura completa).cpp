#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 10


using namespace std;


void imprimeVetor (int vetor [TAM], int tamanho){
    int cont;
    
    cout << "\n";

    for (cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " _ ";
    }
}
   

void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras =  -1;

}

bool fila_vazia(int frente,int tras){

    if(frente > tras){
        return true;
    }else {
        return false;
    }
}

bool fila_cheia(int tras){
    if(tras == TAM -1){
     return true;
    }else{
        return false;
    }


}

void fila_enfileirar(int fila[TAM], int valor, int *tras ){
  
    if(fila_cheia(*tras)){

        cout << "fila cheia!!";

    }else{

        *tras = *tras + 1;
    fila[*tras] = valor;
    }
}

void fila_desenfileirar(int fila[TAM], int *frente, int tras){

    if(fila_vazia(*frente, tras)){
      
        cout << "impossiveç desenfileirar uma fila vazia!";
    
    }else{
        cout << "o valor" << fila [*frente] << "foi removido";

        fila[*frente] = 0;
        *frente = *frente + 1;
    }

}

int fila_tamanho(int tras, int frente){

    return (tras - frente)+ 1;

}



int main(){
    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente ,tras;
    int valor; 

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);

    fila_desenfileirar(fila, &frente, tras);
   

    

    imprimeVetor(fila, fila_tamanho(tras, frente));




}