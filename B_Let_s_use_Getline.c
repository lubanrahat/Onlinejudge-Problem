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

  char s[100];
  scanf("%[^\n]%*c",s);

  for(int i=0;i<length(s);i++) {
    if(s[i]=='\\') {
      break;
    }
    printf("%c",s[i]);
  }
  printf("\n");

  return 0;
}