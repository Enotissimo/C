/*Написать программу, вычисляющую расстояние между двумя точками на оси координат.

Формат входных данных:
На вход программы поступают два числа 
x1, x2 - координаты двух точек на оси координат. 
x1, x2 - целые числа.

Формат выходных данных:
Одно целое число — расстояние между точками x1, x2.

Sample Input:
-39 62

Sample Output:
101
 */

#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    c = fabs(a-b);
    printf("%d", c);
    return 0;
}