/*
Написать программу, вычисляющую площадь треугольника по двум сторонам и углу между ними.

Формат входных данных:
На вход программы поступают три числа a, b, y.
a, b - вещественные числа, длины сторон треугольника.
y - угол между сторонами a, b, записанный в градусах, вещественное число.

Формат выходных данных:
Одно число - площадь треугольника со сторонами a, b и углом y. Точность — два знака после запятой.
Число pi считать равным 3.141593.

Sample Input:
17.77 18.31 168.87

Sample Output:
31.40
 */


#include <stdio.h>
#include <math.h>
int main() {
  double a,b,y,s, r, pi;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &y);
  pi = 3.141593;
  r = y/180*pi;
  s =  (a * b * sin(r) / 2);
  printf("%.2lf", s);
  return 0;
}