/*В следующей программе переменные объявлены внутри программы. 
  Исправьте её таким образом, чтобы значения переменных a, b, и с считывались функцией scanf.

Sample Input:

10 7 2
Sample Output:

15
 */

#include <stdio.h> 
int main(void) {
  int a, b, res;

  a = 10;
  b = 7;
scanf("%d", &a);
    scanf("%d", &b);
  res = a + b;

  int c;

  c = 2;
    scanf("%d", &c);
  res = res - c;

  printf("%d\n", res);
  return 0;
}