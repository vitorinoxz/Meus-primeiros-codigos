#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>
#define TAM 10

using namespace std;


void imprimeVetor(int vetor[TAM], int topo){

    int i;

    for (i < 0; i < TAM; i++){
        cout << vetor[i];
        
    }
}


bool pilha_vazia(int topo){


    if(topo == -1){

        return false;
    }else {
        return true;
    }
}


bool pilha_cheia(int topo){

    if (topo == TAM - 1){


        return true;
    }else {
        return false;
    }
}




void PratosQueSaem(int vetor[TAM], int *topo){

if(pilha_vazia(*topo)){

    cout << "nenhum prato disponivel!";
}else{
    cout << "prato entregue " << pilha[*topo];


    pilha[*topo] = 0;
    *topo = *topo -1;

    

}

}

void PratosQueEntram (int vetor [TAM], int *topo, int valor, int pilha){


    if(pilha_cheia(*topo)){
       cout << "pilha cheia de pratos";

    }else{

        cout << "um prato foi adicionado a pilha";

        *topo = *topo + 1;
      pilha[*topo] = valor;
    }



}




int main(){
 
    int pilha[TAM]; 
    int topo, valorRetirado ;
    
    
    PratosQueEntram(pilha, 7, &topo);
    PratosQueEntram(pilha, 7, &topo); 
    imprimeVetor(pilha, topo);




}