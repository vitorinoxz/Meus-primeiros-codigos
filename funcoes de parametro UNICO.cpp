#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

void mostraSucessor(int numero){

 printf("o sucessor de %d eh %d", a, a + 1);

}


int retornaAntecessor (int numero){
  
    return numero - 1;


}

int main () {

 int a;

 printf("digite um valor:");
 scanf("%d", a);

 mostraSucessor(a);

 printf("o antecessor de %d eh %d", a, retornaAntecessor(a));

 return 0;

}



