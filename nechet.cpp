/*Напишите программу, определяющую чётные числа.

На вход программы поступает одно целое неотрицательное число. 
Программа должна вывести 1, если число чётное, и 0, если число нечётное.

Sample Input:
2

Sample Output:
1
 */

#include <stdio.h>

int main() {
  int a, b;
    scanf("%d", &a);
    b = a%2;
    printf("%d", 1-b);
  return 0;
}