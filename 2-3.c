#include <stdio.h>

#define IN 0
#define NOIN 1

void squeeze(char s1[], char s2[]);

void main(){
  char *t1, *t2;
  t1 = "a";
  t2 = "ak";
  //squeeze(t1, t2);
  printf("%d\n",0177);
}

void squeeze(char *s1, char *s2){
  int i, j, k, s;
  for (i =0,  k = 0; *(s1 +i) != '\0'; i++) {
    s = NOIN;
    for (j=0; *(s2 + j) != '\0'; j++) {
      if (*(s1 + i) == *(s2 + j)) {
        s = IN;
      }
    }
    //if (s == NOIN) {
    //  printf("d");
    //  //printf("%c", *(s1 +i));
    //  //*(s1 + k++) = *(s1 + i);
    //}
  }
  *(s1 + k) = '\0';
}
