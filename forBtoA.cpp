/*
Вывести через пробел все целые числа из промежутка [A,B],(A<B) в обратном порядке: 
от B до A.
Входные данные:
Два целых числа A,B, при этом A<B.

Выходные данные:
Целые числа из промежутка от [A,B], записанные через пробел в обратном порядке.
*/

#include <stdio.h>

int main() {
    int A, B;
    scanf("%d%d", &A, &B);
    for (int i = B; A <= i; i--)
    { printf(" %d", i);
    }
    return 0;
}