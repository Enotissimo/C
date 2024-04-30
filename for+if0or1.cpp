/*
Для заданного числа N проверить, является ли оно простым (имеет только два делителя - само число и 1).

Входные данные:
Одно натуральное число N, отличное от 1.

Выходные данные:
1 -- если число простое
0 -- если число составное (число имеет больше двух делителей)
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 1) {
        printf("0\n");
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
    return 0;
}