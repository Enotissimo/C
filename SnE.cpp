/*
На вход программе подаётся два числа S и E, записанных через пробел. При этом гарантируется, что S≤E. 
Программа должна выводить одно случайное число из промежутка [S;E].

Sample Input:
141 273

Sample Output:
233
 */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
 int S, E;
    S <= E;
    scanf("%d %d", &S, &E);
    printf("%d\n", S + rand()%(E - S + 1));;
  return 0;
}