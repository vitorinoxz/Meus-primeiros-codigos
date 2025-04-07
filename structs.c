#include <stdio.h>
#include <stdlib.h>

struct palavra {
    
    int ordem;
    char letra;
    char texto[255];
    


};



int main () {
    //    criando uma palavra
    struct palavra primeirapalavra;
   
    // modificando os campos
    primeirapalavra.ordem = 0;
    primeirapalavra.letra = "p";   
    
    strcpy(primeirapalavra.texto, "palavrinha");
      
    // mostrando os valores do struct
    printf("ordem: %d, primeira letra: %c, palavra: %s ", primeirapalavra.ordem, primeirapalavra.letra, primeirapalavra.texto);

   
    // lista de structs    
    struct palavra listaDePalavras[3];

    //   modificando os campos
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'd';
    listaDePalavras[1].letra = 'l';
    listaDePalavras[2].letra = 'b';

    strcpy(listaDePalavras[0].texto, "dahora");
    strcpy(listaDePalavras[1].texto, "legal");
    strcpy(listaDePalavras[2].texto, "bacana");

    
    // percorrendo o vetor
    int cont;
    
    for(cont = 0; cont < 3; cont++);
    printf("ordem: %d, primeira letra: %c, palavra: %s ", listaDePalavras[cont].ordem, listaDePalavras[cont].letra, listaDePalavras[cont].texto);


   




return 0;
}
