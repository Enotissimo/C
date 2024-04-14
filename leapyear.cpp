/*
Вычислить номер дня в невисокосном году по заданным числу и месяцу.

Входные данные:
Два целых числа. Первое число m -- номер месяца. 
Второе число d -- номер дня в месяце. 

Выходные данные:
Одно целое число -- порядковый номер дня в невисокосном году.

Sample Input 1:
2 4

Sample Output 1:
35

Sample Input 2:
6 12

Sample Output 2:
163
 */


#include <stdio.h>

int main() {
    int m, d, n;
    scanf("%d %d", &m, &d);
    1 <= m <= 12;
    1 <= d <= 31;
    n = 0;
    switch(m){
        case  12: n = n + 30; //Декабрь
        case  11: n = n + 31; //Ноябрь
        case  10: n = n + 30; //Октябрь
        case  9: n = n + 31; //Сентябрь
        case  8: n = n + 31; //Август
        case  7: n = n + 30; //Июль
        case  6: n = n + 31; //Июнь
        case  5: n = n + 30; //Май
        case  4: n = n + 31; //Апрель
        case  3: n = n + 28; //Март
        case  2: n = n + 31; //Февраль
        case  1: n = n + d; //Январь
        printf("%d\n", n); break;
        default: printf("ERROR!\n"); break;
            }
    return 0;
}