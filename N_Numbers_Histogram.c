#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  char s;
  scanf("%c",&s);
  int n,x;
  scanf("%d",&n);

  for(int i=1;i<=n;i++) {
    scanf("%d",&x);
    for(int i=1;i<=x;i++) {
      printf("%c",s);
    }
    printf("\n");
  }

  return 0;
}