#include <stdio.h>
#include <stdlib.h>
#define LINHA 2
#define COLUNA 2


int main () {
 
int matriz[2][2], aux1, aux2;
    
printf("Digite um valor para [0][0]");
scanf("%d", &matriz[0][0]);

printf("Digite um valor para [0][1]");
scanf("%d", &matriz[0][1]);

printf("Digite um valor para [1][0]");
scanf("%d", &matriz[1][0]);

printf("Digite um valor para [1][1]");
scanf("%d", &matriz[1][1]);

aux1 = matriz[0][0];
aux2 = matriz[0][1];

matriz[0][0] = matriz[1][0];
matriz[0][1] = matriz[1][1];
matriz[1][0] = aux1
matriz[1][1] = aux2



printf("%d %d", matriz[0][0], matriz[0][1]);
printf("%d %d", matriz[1][0], matriz[1][1]);

