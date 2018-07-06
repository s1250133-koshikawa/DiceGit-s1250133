#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int s1,s2,sum;
 
  /* 乱数の種を初期化 */
  srand(time(NULL));
 
  /* サイコロを振る */
  printf("Rolling the dice...\n");
  s1 = rand() % 6 + 1;
  printf("Die 1: %d\n",s1);
  s2 = rand() % 6 + 1;
  printf("Die 2: %d\n",s2);
 
  /* サイコロの出目を出力 */
  sum=s1+s2;
  printf("Total value: %d\n", sum);
 
  return 0;
}
