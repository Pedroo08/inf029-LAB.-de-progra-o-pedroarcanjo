#include <stdio.h>
#define Max 100
#include "valiSexo.h"
#include"valiData.h"
#include"valiNome.h"
#include"valiCPF.h"
struct cadastro{
 char nome[Max];
 char CPF[Max];
 char sexo;
 int dataNas[8];
 int conf[8];
 

};

char cadastrarCliente(char nome[Max],char cpf[Max],char s,int v[8],int conf[6]){
  struct cadastro cad;

    printf("0.Digite o seu nome: ");
    fgets(nome,Max,stdin);
    conf[0]= valiNome(nome);
    
    printf("1-Digite o CPF: ");
    scanf("%s",cpf);
    conf[1] =valiCPF(cpf);
    printf("2-Digite o Sexo(M/F): ");
    scanf("%s",&s);
    conf[2] = valiSexo(s);
    
    printf("3-Digite o dia do nascimento: ");
    scanf("%d",&v[0]);

    printf("3.1-Digite o mês do nascimento: ");
    scanf("%d",&v[1]);

    printf("3.2-Digite o ano do nascimento: ");
    scanf("%d",&v[2]);
    conf[3] = valiData(v);
  
  return (s);
}

int main(void) {
   struct cadastro cad;

     cad.sexo = cadastrarCliente(cad.nome,cad.CPF,cad.sexo,  cad.dataNas,cad.conf);

  int i;
  for(i=0; i < 5;i++)
      if(cad.conf[i] == 1)
      break;  
  
  if(cad.conf[i] == 1)
      printf("Erro no cadastro.O item %d não estar correto",i);
  else{
  printf("*****Cadastro realizado com sucesso******\n");
  printf("--------Ficha---------\n");
  printf("Nome: %s",cad.nome);
  printf("CPF: %s \n",cad.CPF);
  printf("Sexo: %c\n",cad.sexo);
  printf("Data de nascimento: %d/%d/%d\n",cad.dataNas[0],cad.dataNas[1],cad.dataNas[2]);
  }
  return 0;
}