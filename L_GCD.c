#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int a,b,n1,n2;
  scanf("%d %d",&a,&b);
  n1=a;
  n2=b;
  while(n2!=0) {
    int rem=n1%n2;
    n1=n2;
    n2=rem;
  }
  printf("%d\n",n1);

  return 0;
}