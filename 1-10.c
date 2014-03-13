#include <stdio.h>

void main(){
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i< 10; i++)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if ( c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if ( c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++ nother;
  }
  ndigit[100] = 10;
  printf("ndigit[100]:%d\n", ndigit + 100);
  printf("ndigit[200]:%d\n", ndigit + 200);
  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space= %d, other = %d\n",
      nwhite, nother);
}

