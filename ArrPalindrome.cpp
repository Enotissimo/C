/*
Определить является ли массив палиндромом, т.е. первый элемент равен последнему, второй предпоследнему и т.д.

Входные данные:
Первая строка число N,(N>0) -- длина массива. Длина массива не более 100 элементов. 
Вторая строка N целых чисел, записанных через пробел

Выходные данные:
YES -- если массив является палиндромом, NO -- в противном случае.
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int p = 1;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            p = 0;
            break;
        }
    }
    if (p) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}