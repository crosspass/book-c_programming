#include <stdio.h>

#define LEN 11

void zip(char line[],int len);

void main(){
  int c, i;
  char line[LEN];
  i = 0;
  while ((c = getchar()) != EOF) {
    line[i++] = c;
    if (i == LEN -1 ) {
      zip(line, i);
      printf("%s\n", line);
      i = 0;
    }
    else if(c == '\n') {
      line[i] = '\0';
      printf("%s", line);
      i = 0;
    }
  }
}

void zip(char line[], int len) {
  int i;
  line[len] = '\0';
  for (i = 0; len  - i > 0 && line[len - i] == ' '; ++i)
    line[len - i ] ='\0';
}


