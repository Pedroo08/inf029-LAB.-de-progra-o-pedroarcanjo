#include <stdio.h>
int fat(int n){

if (n == 0)
  return 1;
else
  return n * fat(n-1);

}
int main(void) {
  printf("%d\n",fat(7));
  printf("%d\n",fat(6));
  printf("%d\n",fat(3));
  return 0;
}