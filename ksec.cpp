/*
Идёт k секунда суток. 
Определить, сколько целых часов и целых минут будут показывать электронные часы, если на 0-ой секунде они показывают 0 0.

Sample Input:
34961

Sample Output:
9 42
 */


#include <stdio.h>
#include <math.h>
int main() {
  int m, h, k;
  scanf("%d", &k);
  h = k/3600;
  m = k/60%60;
  printf("%d %d", h, m);
  return 0;
}