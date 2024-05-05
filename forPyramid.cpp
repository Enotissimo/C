/*
Пирамида.
Вывести на экран пирамиду из чисел (см. пример входных данных).

Входные данные:
Одно целое число N.

Выходные данные:
Пирамида из натуральных чисел высоты N.

Sample Input 1:
5

Sample Output 1:

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
      for (int k = 1; k <= i; k++)
      {
      printf("%d ", k);
      }
      printf("\n");
    }
  return 0;
}