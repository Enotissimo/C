/*
Необходимо найти максимальный и минимальный элемент последовательности, неизвестной длины.

Входные данные:
Последовательность целых чисел, оканчивающаяся нулём. 
Само число нуль не является членом последовательности, а является лишь сигналом того, 
что достигнут конец последовательности. В последовательности есть как минимум одно ненулевое число.

Выходные данные:
Вывести два целых числа M и m, где M - максимальный элемент последовательности,
m - минимальный элемент последовательности.
*/

#include <stdio.h>

int main() {
    int max, min, m;
    scanf("%d", &m);
    max = min = m;
    do {
        scanf("%d", &m);
        if (m > max && m != 0) {
            max = m;
        } else if (m < min && m != 0) {
            min = m;
        }
    } while (m != 0);
    printf("%d %d", max, min);
    return 0;
}