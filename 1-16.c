#include <stdio.h>

#define MAXLINE 2000
#define IN 1
#define OUT 0
#define NOMARK 0
#define SMARK 1
#define MMARK 2

void main(){
  int i, c;
  char line[MAXLINE];
  char stat, mark, pre;
  i = 0;
  stat = OUT;
  mark = NOMARK;
  while((c = getchar()) != EOF){
    if (mark == SMARK) {
      if (c == '\n')
        mark = NOMARK;
    }
    else if (mark == MMARK) {
      if ( pre == '*' && c == '/')
        mark = NOMARK;
    }
    else {
      if (stat = IN) {
        line[i++] = c;
        if ( c == '\"')
          stat = OUT;
      }
      else {
        if ( c == '\"') {
          line[i++] = c;
          stat =IN;
        }
        else if ( pre == '/') {
          if ( c == '/')
            mark = SMARK;
          if ( c == '*')
            mark = MMARK;
        }
        else {
          if (c != '/')
            line[i++] = c;
        }
      }
    }
    pre = c;
  }
  line[i] = '\0';
  printf("%s",line);
}

