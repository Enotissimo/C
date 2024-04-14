/*
Для целого числа K (от 1 до 99 включительно) напечатать фразу «Мне K лет», 
учитывая при этом, что при некоторых значениях K слово «лет» надо заменить 
на слово «год» или «года».

Входные данные: Одно целое число 1 ≤ K ≤99.

Выходные данные: Фраза с правильным окончанием

Sample Input:
11

Sample Output:
Мне 11 лет
 */


#include <stdio.h>

int main() {
    int K;
    1 <= K <= 99;
    scanf("%d", &K);
    switch(K) {
       case 5 ... 20: 
       case 25 ... 30: 
       case 35 ... 40: 
       case 45 ... 50: 
       case 55 ... 60:
       case 65 ... 70:
       case 75 ... 80:
       case 85 ... 90:
       case 95 ... 99: printf("Мне %d лет", K); break;
        
       case 2 ... 4: 
       case 22 ... 24:
       case 32 ... 34:
       case 42 ... 44: 
       case 52 ... 54: 
       case 62 ... 64: 
       case 72 ... 74: 
       case 82 ... 84: 
       case 92 ... 94: printf("Мне %d года", K); break;
       
       case 1: 
       case 21: 
       case 31: 
       case 41: 
       case 51: 
       case 61: 
       case 71: 
       case 81: 
       case 91: printf("Мне %d год", K); break;
       }
    return 0;
}