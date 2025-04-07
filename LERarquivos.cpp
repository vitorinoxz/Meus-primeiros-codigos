#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>



using namespace std;

int main(){

   int c;

    
   file *file; 


   file = fopen ("texto.txt", "r");

   if(file){

    while ((c - getc(file)) != EOF){

      printf("%c", c);
    }
    
 }
    
    
   
   
   return 0;
}