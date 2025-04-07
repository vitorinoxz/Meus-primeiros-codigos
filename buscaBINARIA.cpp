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

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){
 
    int esquerda = 0;           //Limite da esquerda
    int direita = TAM - 1;      //Limite da direita
    int meio;                   //O meio onde fica o cursor
 
    while(esquerda <= direita){
 
        //Encontra o meio da análise
        meio = (esquerda + direita)/2;
 
        //Quando o valor do meio é encontrado
        if(valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return 1;
        }
 
        //Ajustando os limites laterais
        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }
 
    }
 
    return -1;
 
}

int main (){

        int vetor [10]= {1,23,44,56,63,72,84,90,98};
        int valorProcurado;
        int posicao, posicaoEncontrada;
     
        
    
        printf("\nQual numero deseja encontrar?");
        scanf("\n%d", &valorProcurado);

        if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
            cout << "O valor foi encontrado na posicao:" << posicaoEncontrada;
        }else{
            cout << "Valor nao encontrado";
        }
     
        return 0;
    
    
        
}