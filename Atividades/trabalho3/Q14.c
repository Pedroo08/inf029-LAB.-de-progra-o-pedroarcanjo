#include <stdio.h>

void  ordemCrescentePar (int n) {
   if (n >= 0) {
      ordemCrescentePar(n - 1);
      if(n %2 == 0)
        printf ( "%d\n", n);
   }
}



int main(void) {
  ordemCrescentePar(10);
  
  return 0;
}