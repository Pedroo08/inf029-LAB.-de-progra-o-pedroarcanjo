#include <stdio.h>


void  ordemDecrescente (int N) {

   if (N >= 0) {
     printf ( "%d\n", N);
      ordemDecrescente(N - 1);
      
   }
}



int main(void) {
  ordemDecrescente (20);
  return 0;
}