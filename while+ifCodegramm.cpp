/*
Кодограмма
Из штаба округа на пульт военной части поступают кодограммы -- последовательности, содержащие четырёхзначные числа. 
Т.к. канал связи может прослушиваться, то была разработана специальная методика.
В канал связи постоянно отправляют различные кодограммы. 
При этом, передача секретных данных начинается только после того, как была отправлена кодограмма 2517.

Входные данные:
Последовательность целых чисел. Признак окончания последовательности - число -9999. 
В последовательности обязательно присутствует число 2517.

Выходные данные:
Вывести все секретные кодограммы.
 
Sample Input 1:
4849 5051 5253 2517 5455 5657 5859 -9999

Sample Output 1:
5455 5657 5859 

Sample Input 2:
1011 1217 1819 2021 2223 2517 2729 2031 3234 3337 2484 5051 -9999

Sample Output 2:
2729 2031 3234 3337 2484 5051 
 */

#include <stdio.h>

int main() {
    int a;
    int s = 0;
    int ss = 0;

    while (1) {
        scanf("%d", &a);
        if (a == -9999) break;
        if (a == 2517) {
            s = 1;
            ss = 1;
        } else if (s && ss) {
            printf("%d ", a);
        }
    }

    return 0;
}