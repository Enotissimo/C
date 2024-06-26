/*
Возрастающая последовательность
Последовательность назовём возрастающей, если каждый её следующий член больше предыдущего. 
Написать программу, проверяющую является ли последовательность возрастающей.

Входные данные:
Последовательность целых чисел. Признак окончания последовательности - число -9999. 
В последовательности всегда есть хотя бы два числа, кроме числа -9999.

Выходные данные:
YES -- если последовательность является возрастающей, NO в противном случае.
 */

#include <stdio.h>

int main() {
    int prev, curr;
    int i = 1;
    scanf("%d", &prev);
    while (1) {
        scanf("%d", &curr);
        if (curr == -9999) break;
        if (curr <= prev) {
            i = 0;
            break;
        }
        prev = curr;
    }
    if (i) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}