#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  long long a,b,revers=0;
  scanf("%lld",&a);
  b = a;

  while(b!=0) {
    int digit=b%10;
    revers=revers*10+digit;
    b/=10;
  }

  printf("%lld\n",revers);
  if(a==revers) {
    printf("YES\n");
  }else {
    printf("NO\n");
  }

  return 0;
}