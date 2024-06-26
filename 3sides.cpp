/*
Написать программу, вычисляющую площадь треугольника по трём сторонам.

Формат входных данных:
На вход программы поступают три числа a,b,c — длины сторон треугольника.
a,b,c — вещественные числа.

Формат выходных данных:
Одно число — площадь треугольника со сторонами a,b,c. Точность — два знака после запятой.

Sample Input:
3 4 2.57

Sample Output:
3.85
 */

#include <stdio.h>

int main() {
    double a,b,c,p,s;
    scanf("%lf\n %lf\n %lf", &a, &b, &c);
    p = (a+b+c)/2;
    s = sqrt((p*(p-a)*(p-b)*(p-c)));
    
    printf("%.2lf", s);
    return 0;
}