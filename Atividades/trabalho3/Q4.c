#include <stdio.h>



int somaVetor(int vetor[],int tam){

  if( tam == 0)
    return 0;
  else
    return vetor[tam - 1] + somaVetor(vetor,tam -1);

}
int main(void) {

  int vet [7] = {1,2,3,4,5,6,7};
  printf("%d\n",somaVetor(vet,7));
  printf("%d\n",somaVetor(vet,3));
  printf("%d\n",somaVetor(vet,6));
  return 0;
}