/*
Составить программу вычисления объема цилиндра и конуса, которые имеют одинаковую высоту h и одинаковый радиус основания r.

Входные данные:
Два натуральных числа. Первое r -- радиус основания в см, второе h -- высота в см.

Выходные данные:
Два вещественных числа, записанные через пробел и имеющих два знака после запятой. 
Первое число -- объём цилиндра с высотой h и радиусом основания r. 
Второе число -- объём конуса с высотой h и радиусом основания r.

Справка:
Для числа pi используйте значение 3.14159265358979323846.

Sample Input:
11 29

Sample Output:
11023.85 3674.62
 */


#include <stdio.h>

int main() {
  int r, h;
  double vc, vk, pi = 3.14159265358979323846;
    scanf("%d%d", &r, &h);
  vc = pi*(pow(r, 2.0))*h;
  vk = vc/3.0;
  
  printf("%.2lf %.2lf", vc, vk);
  return 0;
}