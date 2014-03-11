#include <stdio.h>

void main(){
  int fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  while(lower <= upper){
    printf("%d\t%d\n", lower, 5 * (lower - 32) / 9);
    lower += step;
  }
}
