#include <stdio.h>
#define Max 100

struct cadastro{
 char nome[Max];
 char CPF[Max];
 char sexo;
 int dataNas[8];
 

};

char cadastrarCliente(char nome[Max],char cpf[Max],char s,int v[8]){
  struct cadastro cad;

    printf("Digite o seu nome: ");
    fgets(nome,Max,stdin);

    printf("Digite o CPF: ");
    scanf("%s",cpf);

    printf("Digite o Sexo(M/F): ");
    scanf("%s",&s);
    
    printf("Digite o dia do nascimento: ");
    scanf("%d",&v[0]);

    printf("Digite o mês do nascimento: ");
    scanf("%d",&v[1]);

    printf("Digite o ano do nascimento: ");
    scanf("%d",&v[2]);

  
  return (s);
}

int main(void) {
   struct cadastro cad;

     cad.sexo = cadastrarCliente(cad.nome,cad.CPF,cad.sexo,  cad.dataNas);
  
  printf("--------Ficha---------\n");
  printf("Nome: %s",cad.nome);
  printf("CPF: %s \n",cad.CPF);
  printf("Sexo: %c\n",cad.sexo);
  printf("Data de nascimento: %d/%d/%d\n",cad.dataNas[0],cad.dataNas[1],cad.dataNas[2]);

  return 0;
}