#include <stdio.h>
#include <string.h>
#include "bit_flag.h"

#if(OFF)
static int cal_func(double result, double num, char op[2]){

  if (scanf("%lf", &result) != 1){
    printf("計算方法が間違っています。");
    return 0;
    }

  while (1)
  {
    if (scanf("%1s", op) != 1){
      break;
    }

    if (strcmp(op, "q") == 0)
    {
      puts("プログラムを終了します。"); break;
    }

    if (scanf("%lf", &num) != 1){
      break;
    }

    switch (op[0])
    {
    case '+':
      result += num; break;
    case '-':
      result -= num; break;
    case '*':
      result *= num; break;
    case '/':
      if (num == 0.0){
        puts("0で割る事はできません。");
        return 0;
      }
      result /= num; break;
    default:
      printf("入力した演算子記号は使用されません。\n");
      return 0;
    }
    printf("計算結果:%g\n", result);
  }
  printf("最終結果 :%g\n", result);
  return 0;
}

int main(){
  double result = 0.0;
  double num;
  char op[2];

  printf("加減乗除(+,-,*,/)ができます。終了する場合はqを入力して下さい。\n");
  cal_func(result, num, op);
  }

#endif

