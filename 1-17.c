#include <stdio.h>

#define MAXLINE 5000
#define NOMARK 0
#define SMARK 1
#define MMARK 2
#define IN 0
#define OUT 1

void main(){
  char line[MAXLINE];
  char s[100];
  int c, i, pre, t;
  char mark,stat;
  mark = NOMARK;
  stat = OUT;
  i = 0;
  t = 0;
  while (i < MAXLINE - 1 && (c = getchar()) != EOF) {
    if (mark == SMARK) {
      if (c == '\n')
        mark = NOMARK;
    }
    else if (mark == MMARK) {
      if (c == '/' && pre == '*')
        mark = NOMARK;
    }
    else {
      if (stat == IN) {
        line[i++] = c;
        if (c == '"')
          stat = OUT;
      }
      else {
        if(c == '"') {
          line[i++] = c;
          stat = IN;
        }
        else if (pre == '/') {
          if ( c == '/')
            mark = SMARK;
          else if ( c == '*')
            mark = MMARK;
        }
        else if ( c != '/') {
          line[i++] = c;
          if (c == '[' || c == '{' || c == '(') {
            s[t++] = c;
          }
          else if (c == ']') {
            if (s[t - 1] == '[')
              t--;
            else
              printf("Error\n");
          }
          else if (c == '}') {
            if (s[t - 1] == '{')
              i--;
            else
              printf("Error\n");
          }
          else if (c == ')') {
            if (s[t - 1] == '(')
              t--;
            else
              printf("Error\n");
          }
        }
      }
    }
    pre = c;
  }
  if (t != 0)
    printf("Error\n");
  line[i] = '\0';
  printf("%s",line);
}
