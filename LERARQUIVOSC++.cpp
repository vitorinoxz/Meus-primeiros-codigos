#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>



using namespace std;


int main (){

  ifstream input("Texto.txt");

  string textoLido;

  for (string line; getline(input, line);){
    textoLido += line;


  }
  
  cout << "textoLido";


    
    
    
 
    return 0;

}