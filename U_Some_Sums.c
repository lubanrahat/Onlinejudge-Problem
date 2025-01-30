#include <stdio.h>
#include <string.h>
#include <math.h>

int digitSum(int n) {
  int sum=0;
  while(n!=0) {
    sum+=n%10;
    n/=10;
  }
  return sum;
}

int main() {

  int n,a,b,tolalSum=0;
  scanf("%d %d %d",&n,&a,&b);
  for(int i=1;i<=n;i++) {
    int digitSum_i=digitSum(i);
    if(a<=digitSum_i && digitSum_i<=b) {
      tolalSum+=i;
    }
  }

  printf("%d\n",tolalSum);

  return 0;
}