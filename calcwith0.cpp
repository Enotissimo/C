/*
Напишите программу-калькулятор для четырёх основных арифметических действий (сложение, вычитание, умножение и деление).
Программа должна работать для любых целых чисел, включая случай, когда b=0.

Входные данные:
Два целых числа 
a,b и символ действия c.

Выходные данные:
Одно вещественное число, либо строку ERROR!, если введено недопустимое действие или действие выполнить невозможно (деление на ноль). 
Формат вывода чисел: два знака после запятой.
 */
  
#include <stdio.h>

int main() {
  int a, b, d;
  double res;
  char c;
  scanf("%d %d %c", &a, &b, &c);
  switch(c) {
      default : printf("ERROR!"); break;
      case '+': res = a+b; printf("%.2lf", res); break;
      case '-': res = a-b; printf("%.2lf", res); break;
      case '*': res = a*b; printf("%.2lf", res); break;
      case '/': switch(b){
          case 0: printf("ERROR!"); break;
          default: res = a/b; printf("%.2lf", res); break;
      }break;
            }
  return 0;
}