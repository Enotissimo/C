/*
Напишите программу, сравнивающую два целых числа.

Входные данные:
Два целых числа x, y

Выходные данные:
1 -- если x = y
0 -- если x ≠ y
*/

#include <stdio.h>

int main(void) { 
  int x, y;
  scanf("%d%d", &x, &y);
  printf("%d", (x == y)) || printf("%d", (x != y));
      
  return 0;
}