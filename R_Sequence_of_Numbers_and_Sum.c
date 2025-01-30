#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int n,m;

  while(scanf("%d %d",&n,&m)) {
    int sum=0;
    if(n<=0 || m<=0) break;
    if(n>m) {
      int temp=n;
      n=m;
      m=temp;
    }

    for(int i=n;i<=m;i++) {
      sum+=i;
      printf("%d ",i);
    }
    printf("sum =%d\n",sum);

  }

  return 0;
}