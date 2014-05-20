#include <stdio.h>

int htoi(char s[]);

void main(){
  printf("%d\n", htoi("0xff"));
}

int htoi(char s[]) {
  int i, r, t, start, pre;
  start = 0;
  for (i = 0, r = 0; s[i] != '\0'; i++) {
    if (start) {
      if ( s[i] >= 'a' && s[i] <= 'f')
        r = r * 16 + s[i] - 'a' + 10;
      else if (s[i] >= 'A' && s[i] <= 'F')
        r = r * 16 + s[i] - 'A' + 10;
      else
        r = r * 16 + s[i] * 16;
    }
    if (pre == '0' && (s[i] == 'x' || s[i] == 'X'))
      start = 1;
    pre = s[i];
  }
  return r;
}
