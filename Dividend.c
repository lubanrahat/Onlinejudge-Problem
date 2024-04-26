#include <stdio.h>

int main() {

  int d,q,remainder;
  scanf("%d %d",&d,&q);
  remainder=d/3;
  printf("%d\n",d*q+remainder);

  return 0;
}