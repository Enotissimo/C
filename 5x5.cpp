/*Следующая программа выводит таблицу Пифагора для чисел от 1 до 5. 
  Но если вы её запустите, то вывод будет выглядеть некрасиво — столбики "поедут". 
  Добавьте в одну из строк модификатор формата так, чтобы вывод был такой, как в примере ниже.
 

Sample Output:

1    2    3    4    5    
2    4    6    8    10   
3    6    9    12   15   
4    8    12   16   20   
5    10   15   20   25
        */

#include <stdio.h> 
int main(void){

  for (int i=1; i<=5; i++){
    for (int j=1; j<=5; j++)
      printf("%-5d",i*j);
    printf("\n");
  }

  return(0);
}