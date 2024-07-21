/********************/
/*    再帰的な関数    */
/********************/

#include <stdio.h>
#include "Prototype_dec.h"
#include "bit_flag.h"

#if (OFF)
//--- 三項演算子を使用 ---//
#define TERNARY_OP return n > 0 ? n * factorial(n - 1) : 1;
#define TERNARY_OP_ON (1)
#define TERNARY_OP_OFF (0)

int main(){

  int num;
  printf("整数を入力せよ：");  scanf("%d", &num);
  printf("%dの階乗は%dです。\n", num, factorial(num));

  return 0;
}

int factorial(int n){
  TERNARY_OP
  #if (TERNARY_OP_OFF)
    if (n > 0)
      return n * factorial(n - 1);
    else
      return 1;
  #endif
}
#endif










