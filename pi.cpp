/*Гилл Байтс на одном из уроков математики узнал, что если знать диаметр окружности и её длину, то можно вычислить приблизительное значение числа 
pi. Найдя дома небольшую тарелку, Гилл аккуратно измерил диаметр и длину окружности в её верхней части в миллиметрах. 
 * После чего он составил программу на языке Си, которая должна была вычислить приблизительное значение числа pi.
Но, видимо, в программу закралась ошибка, потому что она утверждала, что число pi = 3. 
Помогите Гиллу исправить его программу.
 Sample Output:

pi = 3.14159
 */

#include <stdio.h>
int main(void){
  float diameter=113, length=355;
  float pi=0;
  pi = length/diameter;
  printf("pi = %.5f\n",pi);

  return 0;
}

