#include <stdio.h>


void ler3Letras(char v[3],int qtd){
  int i;
  char l;

  for(i = 0; i < qtd ;i++){
      printf("Digite uma letra: ");
      scanf("%s", &v[i]);
      
    }
}

int main(void) {
  char letras[3];
  int i;

  ler3Letras(letras,3);
  //Tive dificuldade em imprimir letra por letra
  for(i = 0; i < 3 ;i++)
     printf("..%c.. ",letras[i]);
  
  return 0;
}