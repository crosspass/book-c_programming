#include <stdio.h>

int bisearch(int x, int array[], int length);
int bisearch1(int x, int array[], int length);
void main(){
  int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  printf("%d\n", bisearch(4, a1, 9));
  printf("%d\n", bisearch1(4, a1, 9));
}

int bisearch(int x, int array[], int length) {
  int low, mid, high;
  low = 0;
  high = length - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < array[mid])
      high = mid - 1;
    else if (x > array[mid])
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}

int bisearch1(int x, int array[], int lenght) {
  int low, mid, high;
  low = 0;
  high = lenght - 1;
  mid = (low + high) >> 1;
  while (x != array[mid] && low <= high) {
    mid = (low + high) >> 1;
    if (x < array[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }
  if( x == array[mid])
    return mid;
  else
    return -1;
}
