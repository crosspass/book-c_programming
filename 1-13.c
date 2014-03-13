#include <stdio.h>

#define MAXLINE 1000
#define MAXBLEN 20
#define OUT 0
#define IN 1

void chomp(char line[], int lim);
int append(char to[], char from[], int offset, int len);


void main(){
  char line[MAXLINE];
  while(1){
    chomp(line,MAXLINE);
  }
}

void chomp(char line[], int lim) {
  int c,i,t,j;
  int state;
  t = 0;
  char tmp[MAXBLEN];
  for (j = 0; j < MAXBLEN; ++j)
    tmp[j] = '\0';
  for(i = 0; i < lim -1 && (c=getchar()) != EOF && c != '\n';) {
    if( c != ' ' && c != '\t') {
      if (state == OUT) {
        int len;
        len = append(line, tmp, i, t);
        i = i + len;
        line[i++] = c;
        state = IN;
        t = 0;
      }
      else
        line[i++] = c;
    }
    else {
      if (t < MAXBLEN)
        tmp[t++] = c;
      state = OUT;
    }
  }
  if ( c = '\n')
    line[i++] = c;
  line[i] = '\0';
  printf("%s", line);
}

int append(char to[], char from[], int offset, int t) {
  int i;
  for(i = 0; i < t && i < MAXBLEN && offset < MAXLINE;
      ++i, ++offset)
    to[offset] = from[i];
  return i;
}

