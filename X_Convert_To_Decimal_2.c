#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int tt;
  scanf("%d",&tt);

  while(tt--) {
    long long int n,binary=0,i1=0,x,decimal=0,addOne=0,i2=0,decimals=0;
    scanf("%lld",&n);
    while(n!=0) {
      int rem=n%2;
      binary=rem*pow(10,i1)+binary;
      i1++;
      n/=2;
    }
    x=binary;
    while(x!=0) {
      int digit=x%10;
      if(digit==1) {
        addOne=addOne*10+digit;
      }
      x/=10;
    }
    while(addOne!=0) {
      int rem=addOne%10;
      decimals=rem*pow(2,i2)+decimals;
      i2++;
      addOne/=10;
    }
    printf("%lld\n",decimals);
  }

  return 0;
}