/*
Количество целых чисел, которые можно записать используя N двоичных битов вычисляется по формуле 2^N. 
Напишите программу, вычисляющую количество целых чисел, которые можно записать используя N битов.

Формат входных данных: 
На вход программы поступает одно целое число N — количество двоичных битов. 

Формат выходных данных:
Одно целое число — количество целых чисел, которые можно записать, используя N битов.

Sample Input:
11

Sample Output:
2048
 */


#include <stdio.h>
#include <math.h>
int main() {
  int N, N2;
  scanf("%d", &N);
  N2 = pow(2, N);
  printf("%d", N2);
  return 0;
}