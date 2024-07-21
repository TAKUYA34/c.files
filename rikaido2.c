//--- 標準入力からの入力を標準出力にコピーする ---//

//--- getchar関数とEOF ---//
#include <stdio.h>

#if (0)
int main(void){

  int ch;

  while ((ch = getchar()) != EOF)
    putchar(ch);

  return 0;
}
#endif

//--- 標準入力からの入力を標準出力にコピーする ---//

int main(void){
  
  int ch;
  int count[10] = {0}; // 全要素を0で初期化

    while ((ch = getchar()) != EOF)
    {
      switch (ch)
      {
        case '0' : count[0]++; break;
        case '1' : count[1]++; break;
        case '2' : count[2]++; break;
        case '3' : count[3]++; break;
        case '4' : count[4]++; break;
        case '5' : count[5]++; break;
        case '6' : count[6]++; break;
        case '7' : count[7]++; break;
        case '8' : count[8]++; break;
        case '9' : count[9]++; break;
      }
    }
    puts("数字文字の出現回数");
      for (int i = 0; i < 10; i++){
        printf("'%d' : %d\n", i, count[i]);
      return 0;
    }
}