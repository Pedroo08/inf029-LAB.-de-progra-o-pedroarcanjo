#include <stdio.h>

// vetor passado por referência(*)
void ler3Numeros(int v[3],int qtd){
  int i;

  for(i = 0; i < qtd ;i++){
      printf("Digite um número: ");
      scanf("%d",&v[i]);
      
    }
}

int main(void) {
  int vetor[3],i;
  ler3Numeros(vetor,3);

  for(i = 0; i < 3 ;i++)
      printf("..%d.. ",vetor[i]);

  return 0;
}