#include <stdio.h>


int fibonacci(n) {


  if (n == 1)
    return 0;
  else
    if  (n == 2 ) {
            return 1; }
        else {
            return fibonacci(n-1) + fibonacci(n-2);
        }
}

int main(void) {

  printf("%d\n",fibonacci(4));
 
  
  return 0;
}