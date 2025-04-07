#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 10

using namespace std;

// imprime o vetor

void imprimeVetor (int vetor [TAM]){
    int cont;

    for (cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " _ ";
    }

}

//verifica se o valor foi encontrado e  percorre a lista em busca do valor

int buscaSimples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

    int cont;
    bool valorEncontrado;

    
    for (cont = 0; cont < TAM; cont ++){

        if (vetor[cont]== valorProcurado){
         valorEncontrado = true;
         posicaoEncontrada = cont;
    
    }
    }
    if ( valorEncontrado){
        return 1;

    } else{
        return -1;
    }



}


// funcao principal, onde o codigo acontece

int main (){

    int vetor [10]= {1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicao, posicaoEncontrada;
 
    

    printf("\nQual numero deseja encontrar?");
    scanf("\n%d", &valorProcurado);


    if (buscaSimples(vetor, valorProcurado, &posicaoEncontrada) == 1){

        cout << "o valor foi encontrado na posicao :" << posicaoEncontrada;
    } else{
        cout << "valor nao encontrado";
    }
    
    





return 0; 
}