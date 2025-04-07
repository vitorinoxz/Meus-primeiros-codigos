#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

int main () {

    int linhas = 3, int colunas = 3, i, j;
    int **matriz;

    
    matriz = (int **) new int[linhas];
    
    
    for(i = 0; i < linhas; i++){
    matriz[i] = (int * ) new int[colunas];
    }

    
    for(i= 0; i < linhas; i ++){
    for (j = 0; j < coluna; j++){
    matriz[i][j] = i;

    printf("%d", matriz[i][j]);
    
    }
   }

   free(matriz);

return 0;
}


