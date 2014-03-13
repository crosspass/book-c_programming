#include <stdio.h>

#define IN  1
#define OUT 0

void main(){
  int state;
  int c, cn, wn, ln;
  cn = wn = ln = 0;
  state = OUT;
  while((c = getchar()) != EOF){
    ++cn;
    if(c == '\n'){
      ++ln;
    }
    if(c == ' ' || c == '\t' || c == '\n'){
      state = OUT;
    }
    else if(state == OUT){
      state = IN;
      ++wn;
    }
  }
  printf("cn:%d\twn:%d\tln:%d\n", cn, wn, ln);
}


