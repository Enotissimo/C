/*
Точные квадраты
Выведите на экран все точные квадраты натуральных чисел, не превосходящие данного числа N.
Выводить квадраты следует от меньшего к большему.

Входные данные:
Одно целое число N. (1≤N≤10000)

Выходные данные:
Квадраты натуральных чисел, записанные через пробел.
*/

#include <stdio.h>

int main() {
  int n, i;
  do {
  scanf("%d", &n);
  for (i = 1; i <= n; i++)    
  {
  if (i*i <= n) {
  printf("%d ", i*i);
  }
  }
  }
  while (i <= n);
  return 0;
}