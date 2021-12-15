#include <stdio.h>
#include <stdlib.h>

void mostrar(int v[],int tam){

  int i;
  for(i=0;i <tam;i++)
      printf("%d ",v[i]);

  
}


void inverter(int v[],int i,int f){
  int aux = 0;
  if(i < f){
    aux = v[i];
    v[i] =  v[f];
    v[f] = aux;
    inverter(v,i+1,f-1);} 

  
}



int main(void) {
  int vet[100],i;
  for(i = 0; i < 100; i++)
    vet[i] = rand()% 100;
  mostrar(vet, 100);
  printf("\n\ninvertido: \n");
  inverter(vet,0,99);
  mostrar(vet, 100);
  return 0;
}