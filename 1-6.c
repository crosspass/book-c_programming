#include <stdio.h>

void main(){
  double nc;
  int c;
  while((c = getchar()) != EOF)
    if(c == ' ' | c == '\t' | c == '\n')
      ++nc;
  printf("%.0f\n", nc);
}
