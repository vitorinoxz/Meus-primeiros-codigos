#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>



int retornaDez (){

return 10;
}


int main () {

    int a;
    a = retornaDez ();
    printf("%d", a);
    
    float b; 
 b = retornoDecimal ();
 printf("%d", b);


    return 0; 
}

float retornaDecimal (){
    
    return 5.5;
