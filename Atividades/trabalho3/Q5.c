#include <stdio.h>



int soma(int n){
   if(n == 0)
    return 0;
  else
    return(n + soma(n-1));

}
int main(void) {
  
  printf("%d\n",soma(6));
  printf("%d\n",soma(7));
  printf("%d\n",soma(6));
  return 0;
}