#include <stdio.h>
#include <stdlib.h>





int main () {

    int linhas = 3, int colunas = 3, i, j;
    int **matriz;

    
    matriz = (int **)malloc (linhas * sizeof(int *));
    
    
    for(i = 0; 1 < linhas; 1++){
    matriz[i] = (int * )malloc (colunas * sizeof(int));
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

