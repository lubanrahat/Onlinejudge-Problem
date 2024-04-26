#include <stdio.h>

int main() {

  int n,answer = 0;
  scanf("%d",&n);

  while(n!=0) {
    int digit=n%10;
    answer = answer * 10 + digit;
    n/=10;
  }

  printf("%d\n",answer);

  return 0;
}