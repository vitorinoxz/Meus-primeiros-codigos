


typedef struct Data{

    int dia;
    int mes;
    int ano;


}Data;

struct Aluno{

  int id;
  Data nascimento;
  

};



int main(){

    struct Aluno aluno1;

    aluno1.id = 15;
    aluno1.nascimento.ano = 2006;
    aluno1.nascimento.dia = 26;
    aluno1.nascimento.mes = 7;

    // imprimindo valores 

    printf("Nascido em: %D, %D, %D",aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
    



    return 0;
}