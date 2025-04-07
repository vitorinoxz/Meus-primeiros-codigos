#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


int main(){

    ofstream arquivoDeSaida;

    arquivoDeSaida.open("Texto.txt", std::ios_base::app);

    arquivoDeSaida << "eu te amo!"

    arquivoDeSaida.close();
    

    



    return 0;
 }