#include <stdio.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

struct fruta {

  string cor;
  string nome;


};


int main(){
    //  criando ponteiro pra struct
  fruta *fruta1 = new fruta;
    
  // atribuindo valores   
  fruta1 -> cor = "amarela";
  fruta1 -> nome = "banana";

    //exibindo valores    
  cout << "fruta:" << fruta1 -> nome << "cor: "<< fruta1 -> cor;

    // fazendo uma  lista de frutas!
 
  fruta *listadefrutas = new fruta[2];

  listadefrutas[0].cor =  "vermelho";
  listadefrutas[0].nome = "morango";
  listadefrutas[1].cor = "verde";
  listadefrutas[1].cor = "kiwi";

  
   // acessando a lista   
  int cont;
  
   for (cont = 0; cont < 2; cont++){

    cout << "fruta:" << listadefrutas[cont].nome << "cor: "<< listadefrutas[cont].cor;
   }






 return 0;
}
