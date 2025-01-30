#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

long long decimalToBinary(int n) {
  long long binary=0,i=0;
  while(n!=0) {
    int rem=n%2;
    n/=2;
    binary=rem*pow(10,i)+binary;
    i++;
  }
  return binary;
}

bool isPalindrome(int n) {
  long long reverse=0;
  int x=n;
  while(x!=0) {
    int digit=x%10;
    reverse = reverse*10+digit;
    x/=10;
  }
  if(reverse==n)
    return true;
  return false;  
}

int main() {

  int n;
  scanf("%d",&n);

  if(n%2!=0 && isPalindrome(decimalToBinary(n))) {
    printf("YES\n");
  }else {
    printf("NO\n");
  }

  return 0;
}