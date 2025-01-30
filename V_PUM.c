#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  int x=1;
  for(int i=0;i<n;i++) {
    for(int j=1;j<=3;j++) {
      printf("%d ",x);
      x++;
    }
    printf("PUM\n");
    x++;
  }

  return 0;
}