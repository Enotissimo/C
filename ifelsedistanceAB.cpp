/*
Даны две точки: 
А (х1, у1) и В (х2, у2).
Составить программу, определяющую, которая из точек находится ближе к началу координат.

Входные данные:
Четыре целых числа. 
Первые два числа -- координаты точки A(первая точка), 
следующие два числа -- координаты точки B(вторая точка).

Выходные данные:
Вывести одно число, номер точки, которая находится ближе к началу координат. 
Если расстояния между точками до начала координат равны - вывести 0.

Sample Input:
2 3
4 -5
Sample Output:
1
 */

#include <stdio.h>

int main() {
    
    int A, B, x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    A = x1*x1+y1*y1;
    B = x2*x2+y2*y2;
    if (A < B) {
    printf("1");
    } else {
        if (A > B) {
        printf("2");
        } else {
        if (A = B)
        printf("0");
        }
    }
    return 0;
}