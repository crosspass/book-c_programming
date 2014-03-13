#include <stdio.h>

void main(){
  int c;
  while((c = getchar()) != EOF) {
    if(c == '\t') {
      putchar('\\');
      putchar('t');
      continue;
    }
    if(c == '\\') {
      putchar('\\');
      putchar('\\');
      continue;
    }
    if(c == '\n') {
      putchar('\\');
      putchar('n');
      continue;
    }
    putchar(c);
  }
}
