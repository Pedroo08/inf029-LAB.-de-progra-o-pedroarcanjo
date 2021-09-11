#include <stdio.h>

void ler3Palavras(char p[3][100],int qtd){
  int i;
  for(i = 0; i < qtd ;i++){
      printf("Digite uma palavras: ");
      scanf("%s",p[i]);
      
  }  

}


int main(void) {
  int i;
  char palavras[3][100];
  ler3Palavras(palavras,3);

  for(i = 0; i < 3 ;i++)
    puts(palavras[i]);
 
  return 0;
}