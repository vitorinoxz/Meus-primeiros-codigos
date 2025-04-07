#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdbool.h>

bool retornaBooleano(){
    return true;

}

int main () {

    bool variavelBooleana;

    variavelBooleana = retornaBooleano();

    printf("%d", variavelBooleana);

    if(variavelBooleana){
      
    printf("EH VERDADE!");

}
else{
  
    printf("EH FALSO!");  

}

    return 0;

}