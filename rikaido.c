//#include <stdio.h>
//#include <stdlib.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdarg.h>

#if(0)
#include <stdio.h>  //関数定義されているhファイルの呼び出し

int main(void){  //main処理
int sum = 0;  //sumに0を代入
int value;  //int型 valueを宣言

while( sum < 10 )  //sumが10よりも大きい値でループ処理が終了
{
  scanf( "%d", &value );  //user側が入力
  
  sum += value;  //入力した値をsumに加算する
}

printf( "合計は%d\n", sum );  //sumの合計値を出力する
}
#endif

#if(0)
#include <stdio.h>  //関数定義されているhファイルの呼び出し

int main(void){
  for(int x = 0; x < 5; x++){
    if(x == 2){
      continue;
    }
    printf("%d回目の処理が実行されました\n", x);
  }
  return 0;
}
#endif

#if(0)
int main(void){
  for(int y = 0; y < 8; y++){
    for(int x = 0; x < 4; x++){
      printf("yの値%dとxの値%dです\n", y, x);
    }
  }
  return 0;
}
#endif

#if(0)
int main(void){
  int array[10] = M_ARRAY;
  int value = 0;

  for(int x = 0; x < 10; x++){
    value += array[x]; // value = value + array[x]; 
  }
  value /= 10; // value = value / 10; 
  printf("平均点%dを表示", value);
  return 0;
}
#endif

#if(0)
int main(void){
  int array[10] = {10,20,30,40,50,60,70,80,90,99};
  int value = 0;
  
  for(int x = 0; x < 10; x++)
  {
    value = value + array[x];
  }
  value = value / 10;
  printf("arrayの平均は%dです。\n",value);
  return 0;
}
#endif

#if(0)
void swap(int32_t *x, int32_t *y){
 int32_t tmp = *x;
 *x = *y;

 *y = tmp;
}

int main(){

 int32_t a = -99;
 int32_t b = 999;

 printf("a = %i, b = %i\n", a, b);

 swap(&a, &b);

 printf("a = %i, b = %i\n", a, b);

}
#endif

#if(0)

int main(int argc, char const *argv[])
{
 int32_t array[] = {31, 11, 90, 0};
 int32_t *p = array;

 for (size_t i = 0;  i < sizeof array / sizeof(int32_t); i++)
 {
  printf("array[%zu] = %i\n", i, p[i]);
 }

 return 0;
}
#endif

#if(0)
double average_of_doubles(int count, ...) {
  va_list ap;
  double sum = 0;
  int i;
  assert(count > 0);
  va_start(ap, count); /* スタック変数のアドレスを参照するため、最後の引数が必要である。 */
  for (i = 0; i < count; ++i) {
    /* スタックに積まれているはずの double 型の値を取り出し、ポインタ変数 ap が次の引数を指すように変更する。 */
    sum += va_arg(ap, double);
  }
  va_end(ap);
  return sum / count;
}

int main(void) {
  double average1 = average_of_doubles(3, 1.0, 2.0, 3.0);
  double average2 = average_of_doubles(4, 1.5, 2.1, -3.0, 0.7);
  printf("%f\n", average1);
  printf("%f\n", average2);
  return 0;
}
#endif

#if(0)
int call_all(int ope, ...)
{
 va_list op;

 va_start(op, ope);
 int answer = va_arg(op, int);

 for (;;)
 {
  int n = va_arg(op, int);

  if (n < 0)
  {
   break;
  }

  if (ope == '+')
  {
   if (answer < n)
   {
    answer = n;
   };
  }
  else if (ope == '-')
  {
   if (n < answer)
   {
    answer = n;
   };
  }
 }

 va_end(op);
 return answer;
}

int main()
{
 printf("%d\n", call_all('+', 1, 23, 13, 4, 5, 11, 7, 81, 9, 10, -1));
 printf("%d\n", call_all('-', 10, 1,99,  3, -1));
}
#endif

#if(0)
#include <stdio.h>
#include <stdarg.h>

int call_all(char ope, ...)
{
 va_list op;

 va_start(op, ope);
 int answer = va_arg(op, int);

 for (;;)
 {
  int n = va_arg(op, int);

  if (n < 0)
  {
   break;
  }

  if (ope == '+')
  {
   if (answer < n)
   {
    answer = n;
   };
  }
  else if (ope == '-')
  {
   if (n < answer)
   {
    answer = n;
   };
  }
 }

 va_end(op);
 return answer;
}

int main()
{
 printf("%d\n", call_all('+', 1, 23, 13, 4, 5, 11, 7, 81, 9, 10, -1));
 printf("%d\n", call_all('-', 10, 1,99,  3, -1));
}
#endif

#if(0)
#include <stdio.h>

typedef struct {
  int x;
  int y;
} POINT;

int main(){
  POINT left_top = {.x = 10, 10};
  POINT left_bottom = {0};
  POINT right_top = {.x = 10, .y = 10};
  POINT right_bottom = {10, .y = 10};
  
  printf("x = %i, y = %i\n", left_top.x, left_top.y);
  printf("x = %i, y = %i\n", left_bottom.x, left_bottom.y);
  printf("x = %i, y = %i\n", right_top.x, right_top.y);
  printf("x = %i, y = %i\n", right_bottom.x, right_bottom.y);

}
#endif

#if(0)
#include <stdio.h>

typedef struct {
  int x;
  int y;
} POINT;

void destroyer(POINT *point){
  int x = -1;
  int y = -1;
  point -> x += x;
  point -> y += y;
}

int main(){
  POINT p = {1, 2};

  printf("%i, %i\n", p.x, p.y);

  destroyer(&p);
  
  printf("%i, %i\n", p.x, p.y);
}
#endif

#if(0)
#include <stdio.h>

typedef struct {
  int x;
  int y;
} POINT;

POINT move_to(POINT point, int x, int y){
  point.x += x;
  point.y += y;
  
  return point;
}

int main(){
  POINT p = {1, 2};

  printf("%i, %i\n", p.x, p.y);
  
  POINT pp = move_to(p, 10, -10);
  
  printf("%i, %i\n", p.x, p.y);
  printf("%i, %i\n", pp.x, pp.y);

}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

#define ALLOCATE_SIZE (10)

int main(void)
{
 int *values = malloc(sizeof(int) * ALLOCATE_SIZE); //malloc関数でメモリを確保
 if (values == NULL)
 {
  exit(EXIT_FAILURE);
 }

 for (int i = 0; i < ALLOCATE_SIZE; ++i)
 {
  values[i] = i; //valuesに確保したメモリに値を代入
 }

 for (int i = 0; i < ALLOCATE_SIZE; ++i)
 {
  printf("%d\n", values[i]); //valuesに確保したメモリの値を出力
 }

 free(values); //free関数で確保したメモリの値を解放

}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
 char buf[] = "ABCDEFGHIJK";
 char buf2[] = "abcdefghijk";


 for (int i = 7; i < sizeof(buf2); i++)
 {
  memset(buf + i, buf2[i], 1);
 }

 printf("buf文字列→%s\n", buf);

 return 0;
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

#define ALLOCATE_SIZE_1ST (5)
#define ALLOCATE_SIZE_2ND (10)

int main(void)
{
 int *values = malloc(sizeof(int) * ALLOCATE_SIZE_1ST);
 if (values == NULL)
 {
  exit(EXIT_FAILURE);
 }

 for (int i = 0; i < ALLOCATE_SIZE_1ST; ++i)
 {
  values[i] = i;
 }

 // 再確保
 int *tmp = realloc(values, sizeof(int) * ALLOCATE_SIZE_2ND); // 一旦、別の変数に受け取る
 if (tmp == NULL)
 {
  // realloc関数が失敗した場合、元の領域は解放されずに残されている
  // 自分で free関数を呼び出して終了する
  free(values);
  exit(EXIT_FAILURE);
 }
 values = tmp; // 成功したら、受け取ったメモリアドレスをコピー
 tmp = NULL;   // 安全策。確保された領域を指すポインタを array だけに限定する

 for (int i = ALLOCATE_SIZE_1ST; i < ALLOCATE_SIZE_2ND; ++i)
 {
  values[i] = i;
 }

 for (int i = 0; i < ALLOCATE_SIZE_2ND; ++i)
 {
  printf("%d\n", values[i]);
 }

 free(values);
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

struct Data_tag
{
 int value;
 int array[];
};

int main(void)
{
  
 const size_t size = 5;

 struct Data_tag *data = malloc(sizeof(struct Data_tag) + sizeof(int) * size);
 data->value = 0;

 
 for (size_t i = 0; i < size; ++i)
 {
  data->array[i] = 10;
 }
 
 for (size_t i = 0; i < size; ++i)
 {
  printf("%d\n", data->array[i]);
 }

 free(data);
}
#endif

#if(0)
#include <stdio.h>

union student
{
 char name[16];
 int id;
};

int main(void)
{
 union student st = {"山田花子"}; // 宣言と初期化

 printf("student name = %s\n", st.name);
 printf("size = %ld\n\n", sizeof(st));

 st.id = 1200; // 別のメンバへの値の代入
 
 printf("student name = %s\n", st.name);
 printf("student id = %d\n", st.id);
 printf("size = %ld\n", sizeof(st));

 return 0;
}
#endif

#if(0)
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct {
 union
 {
  uint32_t intKey;// uint32_t型の変数intKeyを定義
  char charKey[6];// char型の変数charKey[6]を定義
 };
 char name[16];
 int age;
} DATA;

int main(void)
{
 //ここからは、数字と文字列が混同するデータを作るための
 //複雑なコードを書いていますが、本来はファイルからデータをとってきます。
 //なので、コードの意味を理解する必要はありません。

 DATA data[] = {
     {101, "Aさん", 21},
     {102, "Bさん", 22},
     {103, "Cさん", 23},
     {104, "Dさん", 20},
 };

 snprintf(data[2].charKey, 6, "%s", "AS101");
 snprintf(data[3].charKey, 6, "%s", "AS102");
 //ここまで

 for (int i = 0; i < 4; i++)
 {
  if ( i < 2)
  {
   // idが数字のみの場合
   printf("会員番号：%d, 名前：%s, 年齢：%d\n", data[i].intKey, data[i].name, data[i].age);
  }
  else
  {
   // idに英字も含まれる場合
   printf("会員番号：%s, 名前：%s, 年齢：%d\n", data[i].charKey, data[i].name, data[i].age);
  }
}
 return 0;
}
#endif

#if(0)
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct{

  union{
    uint8_t intKey;
    char charKey[6];//共用体をメンバーに含む、構造体DATA1を定義
  };
  char name[16];
}DATA1;

typedef struct{
  uint8_t intKey;
  char charKey[6];
  char name[16];
}DATA2;

int main(void)
{
  DATA1 data1[] = {
      {101, "Aさん"},
      {102, "Bさん"},
      {103, "Cさん"},
      {104, "Dさん"},
  };
  snprintf(data1[2].charKey, 6, "%s", "AS101");
  snprintf(data1[3].charKey, 6, "%s", "AS102");

  DATA2 data2[] = {
      {.intKey = 101, .name = "Aさん"},
      {.intKey = 101, .name = "Aさん"},
      {.charKey = "AS101", .name = "Aさん"},
      {.charKey = "AS102", .name = "Aさん"},
  };
  
 
  printf("data1 of size = %lu\n", sizeof(data1)/*data1のサイズ*/);

  printf("data2 of size = %lu\n", sizeof(data2)/*data2のサイズ*/);

  return 0;
}
#endif

#if(0)
#include <stdio.h>

#define SWAP(type, x, y) \
 {                       \
  if (x > y)             \
  {                      \
  type tmp = x;          \
  x = y;                 \
  y = tmp;               \
  }                      \
 }

int main(void)
{
    int num1 = 30;
    int num2 = 10;

    SWAP(int, num1, num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    num1 = 20;
    num2 = 40;

    SWAP(int, num1, num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    return 1;
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

int main(void){
int x = 10;
int *p = &x;

printf("xの値は%dです\n", x);
printf("xのアドレス値は%pです\n", &x);
printf("pの値は%dです\n", *p);
printf("pのアドレス値は%pです\n", p);

return 0;
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

double Area(double bottom, double height, double num);

 int main(){
  double value = 0;

  value = Area(7.65, 8.3, 2);
  printf("%lf\n", value);
}

 double Area(double bottom, double height, double num){
  return ((bottom * height) / num);
}

#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

void PrintTimesTables(int nNum);

int main()
{
int nTables = 0;

printf("出力したい九九の段を入力してください：");
scanf("%d", &nTables);
PrintTimesTables(nTables);

return 0;
}
// 九九の段を出力する
void PrintTimesTables(int nNum)
{
for (int j = 1; j <= 9; j++) {
printf("%2d\n", nNum * j);
  }
}

#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

#define STUDENT_NUM (4)

int main(void){
  int arrStudent[STUDENT_NUM] = {10, 20, 30, 40};
  int i = 0;

  for (i = 0; i < STUDENT_NUM; i++)
  {
    printf("%d\n", arrStudent[i]);
  }
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

#define STUDENT_NUM (4)

int main(void){
  int arrStudent[STUDENT_NUM] = {};
  int i = 0;

  for (i = 0; i < STUDENT_NUM; i++)
  {
    printf("%d\n", arrStudent[i]);
  }
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

#define STUDENT_NUM (5)

int main(void){
  int arrStudent[STUDENT_NUM] = {10, 20, 30, 40, 50};
  int i = 0;

  for (i = 0; i < STUDENT_NUM; i++)
  {
    printf("%d\n", arrStudent[i]);
  }
}
#endif

#if(0)
#include <stdio.h>
#include <string.h>

typedef struct{
  int nId;
  int nTestNum[20];
}ST_STUDENT_DATA;

int main(void){
  ST_STUDENT_DATA StStuData;
  int i = 0;

  memset(&StStuData, 0, sizeof(StStuData));

  for (i = 0; i < sizeof(StStuData.nTestNum) / sizeof(StStuData.nTestNum[0]); i++){
    printf("nId:%d, nTestNum:%d\n", StStuData.nId, StStuData.nTestNum[i]);
  }
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n1, n2;
  double x, y;

  puts("二つの値を入力せよ。");
  printf("整数n1:");
    scanf("%d", &n1);
  printf("整数n2:");
    scanf("%d", &n2);

  printf("n1 + n2 = %d\n", n1 + n2);
  printf("n1 - n2 = %d\n", n1 - n2);
  printf("n1 * n2 = %d\n", n1 * n2);
  printf("n1 / n2 = %d\n", n1 / n2);
  printf("n1 %% n2 = %d\n", n1 % n2);

  puts("小数点も表示させたい。");
  printf("整数n1:");
    scanf("%lf", &x);
  printf("整数n2:");
    scanf("%lf", &y);

  printf("n1 + n2 = %lf\n", x + y);
  printf("n1 - n2 = %lf\n", x - y);
  printf("n1 * n2 = %lf\n", x * y);
  printf("n1 / n2 = %lf\n", x / y);

  return 0;
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>
#include "settings.h"

int main(void)
{
  S2 num;
  printf("整数値を入力せよ");
    scanf("%d", &num); //整数値を読み込む

  printf("%dを反転させた整数値は%dです\n", +num, -num); //単項演算子を用いて読み込む

  return 0;
}

#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>
#include "settings.h"

/* n1とn2の和と差をsumとdiffに格納(誤り) */
void sum_diff(S2 n1, S2 n2, S2 *sum, S2 *diff){
  *sum = n1 + n2;  // 和
  *diff = n1 > n2 ? n1 - n2 : n2 - n1; // 差
}

int main(void){
  S2 a, b;
  S2 wa = 0, sa = 0;
  
  puts("二つの整数を入力せよ");
  printf("整数A:");    scanf("%d", &a);
  printf("整数B:");    scanf("%d", &b);

  sum_diff(a, b, &wa, &sa);

  printf("和は%dで差は%dです\n", wa, sa);

  return 0;
}

#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5

//--- バブルソート ---//
void asort(int a[], int n){
  for(int i = 0; i < n - 1; i++){
    for(int j = n - 1; j > i; j--){
      if (a[j - 1] > a[j]){
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
  }
}

int main(void){
  int height[NUMBER];  // NUMBER人の学生の身長

  printf("%d人の身長を入力せよ。\n", NUMBER);
  for (int i = 0; i < NUMBER; i++){
    printf("%2d番:", i + 1);
    scanf("%d", &height[i]);
  }
  asort(height, NUMBER);  //ソート

  puts("昇順にソートしました。");
  for(int i = 0; i < NUMBER; i++)
  {
    printf("%2d番:%d\n", i + 1, height[i]);
  }
  return 0;
}
#endif

#if(0)
#include <stdio.h>
enum animal {Dog, Cat, Monkey, Invalid};

//--- 犬が鳴く ---//
void dog(void){
  puts("ワンワン！！");
}

//--- 猫が鳴く ---//
void cat(void){
  puts("ニャーオ！！");
}

//--- 猿が鳴く ---//
void monkey(void){
  puts("キッキッ！！");
}

//--- 動物を選ぶ ---//
enum animal select(void){
  int tmp;

  do
  {
    printf("0...犬 1...猫 2...猿 3...終了：");
    scanf("%d", &tmp);
  } while (tmp < Dog || tmp > Invalid); // 0,1,2,3でループする処理
  return tmp;
}

int main(void){
  enum animal selected;

  do
  {
    switch (selected = select())
    {
    case Dog:
      dog();
    break;
    
    case Cat:
      cat();
    break;

    case Monkey:
      monkey();
    break;

    case Invalid:
    break;
    }
  } while (selected != Invalid); // 3以外の値が入るとループする
  return 0;
}
#endif

#if(0)
#include <stdio.h>
int InputCheck(int nInt_value);
int main()
{
int nInput = 0; // 入力した値を格納
int nRet = 0; // 入力チェックの戻り値格納用
// 入力を取得
printf("100以下の数値を入力してEnterボタンを押してください");
scanf("%d", &nInput);
// 入力チェックの実施
nRet = InputCheck(nInput);
if (nRet == 0)
{
printf("入力された数値は:%d\n", nInput);
}
else {
printf("異常です");
}
return 0;
}

int InputCheck(int nInt_value)
{
int nRet = 0; // 戻り値を格納する
if ((0 < nInt_value) && (nInt_value <= 100)) {
nRet = 0;
}
else {
nRet = -1;
}
return nRet;
}
#endif 

#if(0)
#include <stdio.h>

int main(void){

  int x, y;
  printf("実数値x:"); scanf("%d", &x);
  printf("実数値x:"); scanf("%d", &y);
  printf("x + y = %f\n", (double)(x + y) / 2);
  // printf("x + y = %lf\n", x / y);
  return 0;
}
#endif

#if(1)
/*  ポインタ配列、ダブルポインタ配列  */
#include <stdio.h>

void print(int num, const char** pp){
  for (int i = 0; i < num; i++)
  {
    printf("配列の中身は：%sです。\n", pp[i]);
  }
}

int main(void){

  const char* x[] = {
    "BAK ",
    "BSW ",
    "APP "
  };

  int num = (sizeof(x) / sizeof(x[0]));
  print(num, x);
}
#endif
