#include <stdio.h>

int main() {

  int x;
  scanf("%d",&x);
  float p;
  scanf("%f",&p);

  printf("%.0f\n",(p/100)*x);

  return 0;
}