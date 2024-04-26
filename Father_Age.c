#include <stdio.h>

int main() {

  int x,y,m,father_Age,sum_children;
  scanf("%d %d %d",&x,&y,&m);

  sum_children=(y*3)-m;
  father_Age=(x*3)-sum_children;
  printf("%d\n",father_Age);

  return 0;
}