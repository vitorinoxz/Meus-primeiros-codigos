#include <stdio.h>
#include <stdlib.h>
#define LETRA 5


int main () {

    int i, num;
    int aux = o

    // solicita numero ao usuario
    printf("digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
       
        if(num % i == 0){
            aux++;
            break;
        
    }

         printf("%d  / %d tem o resto = %d", num, i, num % i);


}
    
    
if (aux == 2 ){
    printf("O numero eh primo");
    

}else {
    printf("o numero nao eh primo!");

    return 0;

}


}
