#include <stdio.h>
#include <string.h>
#include <math.h>

int stringLen(char s[] ) {
  int cnt = 0,i=0;
  while(s[i]!='\0') {
    cnt++;
    i++;
  }
  return cnt;
}

int main() {

  char a[1001],b[100],temp[1001];
  scanf("%s %s",a,b);

  printf("%d %d\n",stringLen(a),stringLen(b));
  int j=0;
  for(int i=0;i<stringLen(a);i++) {
    temp[j]=a[i];
    j++;
  }
  for(int i=0;i<=stringLen(b);i++) {
    temp[j]=b[i];
    j++;
  }
  printf("%s\n",temp);

  char tem=a[0];
  a[0]=b[0];
  b[0]=tem;

  printf("%s %s\n",a,b);

  return 0;
}