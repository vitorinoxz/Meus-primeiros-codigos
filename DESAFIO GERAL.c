#include <stdio.h>
#include <stdlib.h>




int main () {
    int inicio, fim, passo 

    // Solicita valores ao o usuario
    printf("digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("digite o valor final: ");
    scanf("%d", &fim);

    printf("digite o valor do passo (de quanto em quanto o i ira contar): ");
    scanf("%d", &passo);


    // verifica se o passo eh valido
    if (passo == 0 ){
        printf("o passo nao pode ser zero");
        return 1;
    }


    // se o inicio for menor que o fim faz contagem crescente
    if (inicio < fim ) {
        for (int i = inicio; i <= fim; i += passo ){
        printf ("%d", i);
    }
    }
    
    // Se o inicio for maior que o fim faz contagem descrescente.
    else {
        for(int i = inicio ; i >= fim; i -= passo){
            printf("%d", i );
    }

    }

printf("");
return 0;

