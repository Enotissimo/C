/*
Услуги телефонной сети оплачиваются по следующему правилу: 
за разговоры до 500 минут (включительно) в месяц — 350 руб., 
а разговоры сверх установленной нормы оплачиваются из расчета 2 руб. за минуту. 
Написать программу, вычисляющую плату за пользование телефоном для введенного времени разговоров за месяц.

Входные данные:
Одно целое число -- количество минут разговора за прошедший месяц.

Выходные данные:
Одно целое число -- размер платы в рублях за прошедший месяц.
 */

#include <stdio.h>

int main() {
   int mins, pay;
    scanf("%d", &mins);
    pay = (mins-500)*2;
    if (mins<=500)
    printf("350");
    else printf("%d", pay+350);
  return 0;
}