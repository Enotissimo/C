/*На вход программы поступают два целых числа — длины сторон прямоугольника. Посчитайте и выведите периметр этого прямоугольника.

Периметр — сумма длин всех сторон.

Sample Input:

12 25
Sample Output:

74
 */


#include <stdio.h>

int main() {
  int l1, l2, p;
  scanf("%d", &l1);
  scanf("%d", &l2);
  p = 2*(l1+l2);
  printf("%d", p);
  return 0;
}