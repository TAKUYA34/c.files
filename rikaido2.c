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

#if (0)
/* 二つの整数を昇順に並べる */

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
    swap(n1, n2); // main内でアドレスを渡しているため、アドレスを返さなくても良い。
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

#if (0)
/* 配列の要素アドレス(要素へのポインタ)を表示する */

int main(void){

  int arrayData[5] = {1, 2, 3, 4, 5};
  int* pt_arrayData = arrayData; 

  for (int i = 0; i < 5; i++){
    printf("&a[%d] = %p   p + %d = %p\n", i,  &arrayData[i], i, pt_arrayData + i);
  }
  return 0;
}
#endif

#if (0)
/* 配列の要素を受け渡す */

  #define FOR_MAX_COUNT 5 

  void arraySet(int a[], int value)
  {
    for (int i = 0; i < FOR_MAX_COUNT; i++)
    {
        a[i] = value;
    }
  }

int main(void){

  int a[] = {1, 2, 3, 4, 5};

  arraySet(a, 99);
  
  for (int i = 0; i < FOR_MAX_COUNT; i++)
  {
      printf("a[%d]の中身は%dです。\n", i, a[i]);
  }
}
#endif

#if (0)
/* 文字列の長さを調べる(ポインタによる走査) */

//---  文字列の長さを返す  ---//
int str_length(const char *s)
{
  int len = 0;
    while (*s++)
    {
        len++;
    }
  return len;
}

int main(void){

  char ca[128]; // ナル文字も含めて128文字まで格納できる

  printf("文字列を入力せよ：");  scanf("%s", ca);

  printf("文字列\"%s\"の長さは%dです。\n", ca, str_length(ca));
}
#endif

#if (0)

#define ARRAY_BIT 128
/* 文字列sをdにコピーする */
  char* str_copy(char* d, const char* s)
  {
    char* t = d;  // dのデータをtにコピーする
    while ((*d++ = *s++))  // dをsの文字列に上書きする
    {
        ; // 空
    }
    return t;
  }

int main(void){

  char str[ARRAY_BIT] = "ABC";
  char tmp[ARRAY_BIT];

  printf("str = \"%s\"\n", str);
  printf("コピーするのは：");  scanf("%s", tmp);

  str_copy(str, tmp);

  printf("str = \"%s\"\n", str);

}
#endif

#if (1)

/* 5人の学生の身長を昇順にソートする */

#define NUMBER 5
#define NAME_LEN 64

/* 学生を表す構造体 */
typedef struct 
{
  char name[NAME_LEN];
  int height;
  double weight;
}STUDENT;

/* 昇順に対応するため、値を入れ替える */
void swap_Student(STUDENT* x, STUDENT* y)
{
  STUDENT tmp = *x;
  *x = *y;
  *y = tmp;
}

/* 昇順にソートする処理 */
void sort_by_height(STUDENT a[], int n)
{
  for (int i = 0; i < (n - 1); i++) // 配列[0]からスタートするため調整。n(5)-1回ループ
  {
    for (int j = (n - 1); j > i; j--) // １つ前のheightが大きい場合に入れ替える。
    {
      if (a[j - 1].height > a[j].height)
      {
        swap_Student(&a[j - 1], &a[j]);
      }
    }
  }
}

int main(void)
{
  STUDENT std[NUMBER];

  for (int i = 0; i < NUMBER; i++){ 
    printf("貴方の名前は？：");  scanf("%8s", std[i].name);
    printf("貴方の身長は？：");  scanf("%6d", &std[i].height);
    printf("貴方の体重は？：");  scanf("%6lf", &std[i].weight);
  }

  for (int i = 0; i < NUMBER; i++)
  {
    printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
  }

  sort_by_height(std, NUMBER);
  puts("身長順にソートしました。");

  for (int i = 0; i < NUMBER; i++)
  {
    printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
  }
  return 0;
}
#endif

/*  {"Sato",   174, 67.3},
    {"Sanage", 168, 71.7},
    {"Takao",  153, 41.4},
    {"Mike",   148, 38.7},
    {"Masaki", 182, 75.2}
*/




