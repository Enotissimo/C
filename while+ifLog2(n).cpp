/*
По данном числу N определить, является ли оно степенью числа 2.

Входные данные:
Одно целое неотрицательное число N.

Выходные данные:
YES -- если число N является степенью двойки, и NO в противном случае.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i == n) {
            printf("YES");
            return 0;
        }
        i *= 2;
    }

    printf("NO");
    return 0;
}