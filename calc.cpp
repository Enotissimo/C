/*
Напишите программу-калькулятор для четырёх основных арифметических действий (сложение, вычитание, умножение и деление).

Входные данные:
Символ действия c и два целых числа a,b. Гарантируется, что число b не будет равно нулю. 

Выходные данные:
Одно вещественное число - результат, либо строку ERROR!, если введено неверное арифметическое действие. 
Формат вывода чисел: два знака после запятой.

Sample Input:
+ 45 23

Sample Output:
68.00
 */



#include <stdio.h>

int main() {
  int a, b;
  double res;
  b != 0;
  char c;
  scanf("%c %d %d", &c, &a, &b);
  switch(c) {
      default : printf("ERROR!"); break;
      case '+': res = a+b; printf("%.2lf", res); break;
      case '-': res = a-b; printf("%.2lf", res); break;
      case '*': res = a*b; printf("%.2lf", res); break;
      case '/': res = a/b; printf("%.2lf", res); break;
            }
  return 0;
} 