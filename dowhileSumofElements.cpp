/*
Сумма элементов последовательности
Вычислить сумму элементов последовательности неизвестной длины.

Входные данные:
Последовательность целых чисел, оканчивающаяся нулём.

Выходные данные:
Одно целое число -- сумма всех элементов последовательности.
*/

#include <stdio.h>

int main() {
  int i, sum=0;
  do {
  scanf("%d", &i);
  sum += i;
  }
  while (i != 0);
  printf("%d ", sum);
  return 0;
}