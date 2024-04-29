/*
Фибоначчи. 
Необходимо посчитать значение N-го числа Фибоначчи.

Входные данные:
Одно натуральное число N, (N≤45)

Выходные данные:
Значение N-го числа Фибоначчи.
*/

#include <stdio.h>

int main() {
    int N;
    int f1 = 0; 
    int f2 = 1; 
    int tmp; 
    scanf("%d", &N);

    if (N <= 1) {
        printf("%d", N);
        return 0;
    }

    for (int i = 2; i <= N; i++) {
        tmp = f1;
        f1 = f2;
        f2 = f1 + tmp;
    }

    printf("%d", f2);

    return 0;
}