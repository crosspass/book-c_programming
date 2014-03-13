#include <stdio.h>

void main(){
  int c;
  int pre;
  pre = c = getchar();
  putchar(c);
  while((c = getchar()) != EOF){
    if( pre == ' ' && c == ' ')
      continue;
    putchar(c);
    pre = c;
  }
}
