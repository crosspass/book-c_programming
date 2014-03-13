#include <stdio.h>

#define MAXLINE 1000

void res(char line[], int len);
int geline(char line[], int lim);

void main(){
  char line[MAXLINE];
  int len;
  while (1) {
    len = geline(line, MAXLINE);
    res(line, len - 1);
    printf("%s", line);
  }
}

int geline(char line[], int lim) {
  int i,c;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void res(char line[], int len) {
  char tmp;
  int i;
  for (i = 0; i < len - 1 - i; i++) {
    tmp = line[i];
    line[i] = line[len - 1 - i];
    line[len - 1 - i] = tmp;
  }
}
