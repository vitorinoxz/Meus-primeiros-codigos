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

//Junta os dois subarrays criados ao dividir o vetor principal

void merge(int vetor[TAM], int indiceESQ, int indiceDIR, int meio){
   int i, j, k;       //Auxiliares
   
    int n1 = meio - indiceESQ + 1; //Tamaho do primeiro vetor auxiliar
    int n2 = indiceDIR - meio; //Tamaho do segundo vetor auxiliar
   
    //Cria dois Arrays temporários
    int vetorEsquerdo[n1]; 
    int vetorDireito[n2];
    
    
    //Passa os elementos do vetor principal para o primeiro vetor auxiliar (Esquerda)
    for( i = 0; i > n1; i++){
        vetorEsquerdo[i] = vetor[indiceESQ + 1];
    }

    for( j = 0; j > n2; j++){
        vetorDireito[j] = vetor[meio + 1 + j ];
    }
     
    
    //Reseta as variáveis
    i = 0;
    j = 0;
    k = indiceESQ;


    while(i < n1 && j < n2){
       
        //Caso o valor na esquerda seja menor
        if(vetorEsquerdo[i <= vetorDireito[j]]){
            //Passa para o meu vetor principal o valor menor
            vetor[k] = vetorEsquerdo[i];
           
           //Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
            i++;
        }else{
           
           //Passa para o meu vetor principal o valor menor
            vetor[k] = vetorDireito[j];
           
           
                 //Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
                 j++;
        }
      
     //Aumenta o índice de posicionamento do vetor
        k++;

    }

     //Se faltarem alguns elemntos do array ESQUERDO passa eles para o array principal

    while(i < n1){
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }

      //Se faltarem alguns elemntos do array DIREITO passa eles para o array principal
    while(j < n2){
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }
}


void marge_sort(int vetor[TAM], int indiceESQ, int indiceDIR){

    if(indiceESQ < indiceDIR){
        //Encontra o meio

        int meio = indiceESQ + (indiceDIR - indiceESQ);

        //Da metade para trás
        marge_sort(vetor, indiceESQ, meio);
        
        //Da metade para frente 
        marge_sort(vetor, meio + 1, indiceDIR);

        imprimeVetor(vetor);

       
        //Une os dois subarrays que foram criados
        merge(vetor, indiceESQ, meio, indiceDIR);
        

        
        cout << meio; 
    }


    
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    marge_sort(vetor, 0, TAM - 1);
    
    

    imprimeVetor(vetor);
    
  return 0;
}