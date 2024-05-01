/*
Дано натуральное число N. Найти наименьшее натуральное число r, такое, что 2^r ≥N.

Входные данные:
Одно натуральное число N.

Выходные данные:
Число r.
*/

#include <stdio.h>

int main() {
    int n, r = 1;
    scanf("%d", &n);
    while (pow(2, r) < n) {
        r++;
    }
    printf("%d", r);
    return 0;
}