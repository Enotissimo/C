/*На вход программы поступает натуральное трёхзначное число. 
  Напишите программу, которая выводит сумму цифр этого числа.

Sample Input:

123
Sample Output:

6
 */


#include <stdio.h>

int main() {
  int a, b, c, d, e;
  scanf("%d", &a);
  b = a / 100;
  c = a % 10;
  d = (a % 100)/10;
  e = b+c+d;
  printf("%d\n", e);
  return 0;
}