/*
Вывести последовательность чисел, поступившую на вход.

Входные данные:
На вход программы поступает последовательность целых чисел. 
Количество чисел в последовательности заранее неизвестно. 
Но известно, что в конце последовательности записано число -9999 и в последовательности 
всегда есть хотя бы одно число, кроме -9999.

Выходные данные:
Вывести элементы последовательности на экран через пробел.
*/

#include <stdio.h>

int main() {
  int i;
  do {
  scanf("%d", &i);
  printf("%d ", i);
  }
  while (i != -9999);
  return 0;
}