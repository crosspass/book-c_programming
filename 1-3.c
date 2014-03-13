#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void main(){
  int fahr;
  while(fahr <= UPPER){
    printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);
    fahr += STEP;
  }
}
