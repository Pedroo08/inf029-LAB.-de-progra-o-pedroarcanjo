#include <stdio.h>

int FuncaoFatorial(long long int x){
    long long int resultado;
    int i;
    resultado = x;
    // Assumir que o fatorial pode ser realizado apenas em números inteiros e positivos 
    if (x <= 0)
     return 0;
    else
      for(i = x; i >= 1;i--){
          if ((i - 1) > 0)  
            resultado *= (i-1);
      }


  return (resultado);
}



int main(void) {
  long long int fatorial;
  int n;

  printf("Digite o número: ");
  scanf("%d",&n);

  fatorial = FuncaoFatorial(n);

  if (fatorial == 0)
    printf("Erro!! Não é possivel fazer esse fatorial");
  else
    printf("%d! = %lld..",n,fatorial);
  
  return 0;
}