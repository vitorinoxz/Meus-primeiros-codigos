#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

int retornaCOMmaisDEZ(int numero){
    return numero + 10;
}

void aumentaDez(int *numero){
    
    *numero = *numero + 10;

}    

int main () {

 int a = 5;

 printf("%d", a);

 a = retornaCOMmaisDEZ(a);
 printf("%d", a);
 
 aumentaDez(&a);
 printf("%d", a);

 return 0;

}



