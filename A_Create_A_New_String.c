#include <stdio.h>

int length(char s[]) {
  int i=0,cnt=0;

  while(s[i]!='\0') {
    cnt++;
    i++;
  }
  return cnt;
}

int main() {

  char s1[100];
  char s2[100];

  scanf("%s %s",s1,s2);

  printf("%d %d\n",length(s1),length(s2));
  printf("%s %s\n",s1,s2);

  return 0;
}