#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

void mostraSoma(int primeirovalor, int segundovalor){

    printf("a soma entre %d e %d eh %d", primeirovalor, segundovalor, primeirovalor + segundovalor);
 
}


int retornaSoma (int primeirovalor, int segundovalor){
    
     return primeirovalor + segundovalor;
} 

int main () {

    int a = 5;
    int b = 10;

    mostraSoma(a,b);

    printf("a soma entre %d e %d eh %d", a, b, retornaSoma(a,b));

    return 0;
}

 