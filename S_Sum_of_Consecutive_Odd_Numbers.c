#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int tt;
  scanf("%d",&tt);
  while(tt--) {
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    if(a>b) {
      int temp=a;
      a=b;
      b=temp;
    }
    for(int i=a+1;i<b;i++) {
      if(i%2!=0) {
        sum+=i;
      }
    }
    printf("%d\n",sum);
  }

  return 0;
}