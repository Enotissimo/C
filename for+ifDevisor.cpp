/*
Для заданного числа n вывести все его делители и их количество на экран.

Входные данные:
Одно натуральное число N.

Выходные данные:
Делители числа N, записанные через один пробел в порядке возрастания .
Количество делителей на отдельной строке.
*/

#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d", count);
    return 0;
}