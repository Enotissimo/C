/*
Написать программу проверяющую, является ли правильной дробь B/A.

Входные данные:
Два натуральных числа A,B.

Выходные данные:
Строка yes, если дробь правильная, строка no в противном случае.

Справка:

Дробь называется правильной, если знаменатель больше числителя.
 */


#include <stdio.h>

int main() {
    int A, B;
    scanf("%d%d", &A, &B);
    if (A >= B)
    printf("no");
    else printf("yes");
    return 0;
}