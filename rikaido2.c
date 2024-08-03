//--- 標準入力からの入力を標準出力にコピーする ---//

//--- getchar関数とEOF ---//
#include <stdio.h>
#include "Prototype_dec.h"
#include "DataAcq_info.c"

#if (0)
int main(void){

  int ch;

  while ((ch = getchar()) != EOF)
    putchar(ch);

  return 0;
}
#endif

//--- 標準入力からの入力を標準出力にコピーする ---//
#if (0)
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
#endif

#if (0)

//--- 文字列リテラルの大きさを表示する ---//
int main(void){

    printf("sizeof(\"123\")          = %zu\n", sizeof("123"));
    printf("sizeof(\"AB\\tC\")       = %zu\n", sizeof("AB\tC"));
    printf("sizeof(\"abc\\0def\")    = %zu\n", sizeof("abc\0def"));

//--- 配列に文字列を格納して表示 (代入) ---//
    char str[4] = {'A', 'B', 'C', '\0'}; // 文字を格納する配列

/*    str[0] = 'A'; // 代入
    str[1] = 'B'; // 代入
    str[2] = 'C'; // 代入
    str[3] = '\0'; // 代入  */

    printf("文字列strは\"%s\"です。\n", str);

//--- 配列に文字列を格納して表示 (初期化) ---//

    char str2[4] = "ABC";   // {'A', 'B', 'C', '\0'}による初期化
    printf("文字列strは\"%s\"です。\n", str);
    return 0;
//--- 名前を尋ねて挨拶 (文字列の読み込み) ---//
}

#endif

#if (0)
int main(void){

    char name[48];

    printf("お名前は：");
    scanf("%s", name); // nameに&を置かない!

    printf("こんにちは、%sさん!\n", name);
}
#endif


#if (0)
//--- 関数マクロ ---//
  #define TEST(x) (x * 2)
//--- 副作用を含むパラメータを持つマクロ ---//
  #define SQUARE(x) ((x) * (x))
//--- 文字列化演算子# ---//
  #define NAIVE_STR(x) #x /* パラメータを文字列に変換 */
  #define NAME Anders
//--- 文字列化演算子# 〜Anderを表示させる 〜 ---//
  #define STR_HELPER(x) #x
  #define STR(x) STR_HELPER(x)
//--- トークン連結演算子## ---//
  #define MinTime 0
  #define MaxTime 480
  #define TimeCount 8
  #define NAIVE_AVERAGE(x) (((Max##x) - (Min##x)) / (x##Count))
//--- トークン連結演算子## 〜失敗例〜 ---//
  #define TIME Time /* return (((MaxTIME) - (MinTIME)) / (TIMECount)); ←error # */
//--- トークン連結演算子## 〜解決策〜 ---//
  #define GLUE_HELPER(x, y) x##y
  #define GLUE(x, y) GLUE_HELPER(x, y)
  #define AVERAGE(x) (((GLUE(Max,x)) - (GLUE(Min,x))) / (GLUE(x,Count)))
  //--- do {} while(0)形式 〜マクロ形式〜 ---//
  #define DO_ONE(x) test(x)

  /* a_function関数処理 */
  static int a_function(int* x){
    int y = 50;
    x = &y;
    return *x;
  }

  /* test関数処理 */
  int test(int x){
    return a_function(&x);
  }

int main(void){
  int i;
  int x = 4;
  printf("xの値は%dです。\n", TEST(x));
  printf("%d\n", SQUARE(++i)); /* printf("%d\n", ((++i) * (++i))); ※warning: multiple unsequenced modifications to 'i' [-Wunsequenced]*/
  puts(NAIVE_STR(NAME)); /* NAMEが出力され、Andersは出力されない. */
  puts(STR(NAME)); /* Andersが出力される. */
  printf("平均値は%dです。\n", NAIVE_AVERAGE(Time));
  printf("平均値は%dです。\n", AVERAGE(TIME));
  printf("%dです。\n", DO_ONE(x));
}
#endif


#if (0)

#define Bit_shiftL(x) (K_DATA(x) & (unsigned short)1U << 4)
#define DATALIST_PASS (M_DATA_1, M_DATA_2, M_DATA_3, M_DATA_4)
#define DATALIST_VALUE(a, b ,c, d) (DATA_1(a), DATA_2(b), DATA_3(c), DATA_4(d))
#define M_DATALIST DATALIST_VALUE
#define K_DATA(x) M_DATALIST

typedef struct 
{
long u1_ecuInfoData;
long u1_ecuInfoData_a;
long u1_ecuInfoData_b;
long u1_ecuInfoData_c;
long u1_ecuInfoData_d;
long u1_ecuInfoData_e;
long u1_ecuInfoData_f;
long u1_ecuInfoData_g;
long u1_ecuInfoData_h;
long u1_ecuInfoData_i;
long u1_ecuInfoData_j;
long u1_ecuInfoData_k;
} STRUCTURE_VALUES;

#endif

#if (1)
/* 二つの整数を昇順に並べるプログラムの作成 */

void swap(int* x, int* y)
{
  int temp = *x;  // tempにxの値で初期化
  *x = *y;  // yの値をxに更新
  *y = temp; //  xの値をyに更新
}

/* n1 <= n2となるようにソートする */
void swap2(int* n1, int* n2)
{
  if (n1 > n2)
  {
    swap(n1, n2);
  }
}

int main(void)
{
  int x;
  int y;

  puts("xの値を入力してください。");  scanf("%d", &x);
  puts("yの値を入力してください。");  scanf("%d", &y);

  printf("xの値は%dです。\n", x);
  printf("yの値は%dです。\n", y);

  swap2(&x, &y);

  printf("xの値は%dに変化しました。\n", x);
  printf("yの値は%dに変化しました。\n", y);

}

#endif


