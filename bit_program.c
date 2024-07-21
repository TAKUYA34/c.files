#if(1)
// ビット単位の論理演算
#include <stdio.h>

//---  整数x中のセットされたビット数を返す ---//
int count_bits(unsigned x){
  int bits = 0;
  while (x)
  {
    if (x & 1U) bits++;
    x >>= 1;
  }
  return bits;
}

//---  unsigned型のビット数を返す ---//
int int_bits(void){
  return count_bits(~0U);
}

//---  unsigned型のビット内容を表示 ---//
void print_bits(unsigned x){
  for (int i = int_bits() - 1; i >= 0; i--)
  {
    putchar(((x >> i) & 1U) ? '1' : '0');
  }
  
}

int main(void){

  unsigned a, b;
  printf("非負の整数を二つ入力せよ。\n");
  printf("a :"); scanf("%u", &a);
  printf("b :"); scanf("%u", &b);

  putchar('\n');
  printf("a ="); print_bits(a); putchar('\n');
  printf("b ="); print_bits(b); putchar('\n');
  printf("a & b ="); print_bits(a & b); putchar('\n');
  printf("a | b ="); print_bits(a | b); putchar('\n');
  printf("a ^ b ="); print_bits(a ^ b); putchar('\n');
  printf("~a ="); print_bits(~a); putchar('\n');
  printf("~b ="); print_bits(~b); putchar('\n');
  
  return 0;
}
#endif


#if(0)
// ビット単位の論理演算
// Uは符号なし型を明示的に表示させている
#include <stdio.h>

//---  整数x中のセットされたビット数を返す ---//
int count_bits(unsigned x){
  int bits = 0;
  while (x)
  {
    if (x & 1U) bits++; // 全ビットの中に1があればbits + 1カウント
    x >>= 1;  // 最下位ビットの判定が終了したら1左シフトする
  }
  return bits;
}

//---  unsigned型のビット数を返す ---//
int int_bits(void){
  return count_bits(~0U); //0を1に反転させる
}

//---  unsigned型のビット内容を表示 ---//
void print_bits(unsigned x){
  for (int i = int_bits() - 1; i >= 0; i--) // int_bits()で帰ってきた値を1つずつ判定するループ文
  {
    putchar(((x >> i) & 1U) ? '1' : '0'); // unsignedの最上位ビットと最下位ビット全てに対して、1なら1を返し、0なら0を返す処理
  }
  
}

// 左シフト/右シフト
int main(void){

  unsigned x, n;

  printf("非負の整数 :"); scanf("%u", &x);
  printf("シフトするビット数 :"); scanf("%u", &n);

  putchar('\n');
  printf("整数     ="); print_bits(x); putchar('\n');
  printf("左シフト ="); print_bits(x << n); putchar('\n');
  printf("右シフト ="); print_bits(x >> n); putchar('\n');
  return 0;

}
#endif


#if(0)
// ビット単位の論理演算
// Uは符号なし型を明示的に表示させている
#include <stdio.h>

//---  整数x中のセットされたビット数を返す ---//
int count_bits(unsigned x){
  int bits = 0;
  while (x)
  {
    if (x & 1U) bits++; // 全ビットの中に1があればbits + 1カウント
    x >>= 1;  // 最下位ビットの判定が終了したら1左シフトする
  }
  return bits;
}

//---  unsigned型のビット数を返す ---//
int int_bits(void){
  return count_bits(~0U); //0を1に反転させる
}

//---  unsigned型のビット内容を表示 ---//
void print_bits(unsigned x){
  for (int i = int_bits() - 1; i >= 0; i--) // int_bits()で帰ってきた値を1つずつ判定するループ文
  {
    putchar(((x >> i) & 1U) ? '1' : '0'); // unsignedの最上位ビットと最下位ビット全てに対して、1なら1を返し、0なら0を返す処理
  }
  
}

// 最下位ビットのセット/リセット/反転
int main(void){

  unsigned n;

  printf("非負の整数 :"); scanf("%u", &n);

  putchar('\n');
  printf("元の値   ="); print_bits(n); putchar('\n');
  printf("セット   ="); print_bits(n | 1U); putchar('\n'); // 1
  printf("リセット ="); print_bits(n & ~1U); putchar('\n'); // 0
  printf("反転     ="); print_bits(n ^ 1U); putchar('\n'); // 元の値を反転
  return 0;

}
#endif

#if(0)
// ビット単位の論理演算
// Uは符号なし型を明示的に表示させている
#include <stdio.h>

//---  整数x中のセットされたビット数を返す ---//
int count_bits(unsigned x){
  int bits = 0;
  while (x)
  {
    if (x & 1U) bits++; // 全ビットの中に1があればbits + 1カウント
    x >>= 1;  // 最下位ビットの判定が終了したら1左シフトする
  }
  return bits;
}

//---  unsigned型のビット数を返す ---//
int int_bits(void){
  return count_bits(~0U); //0を1に反転させる
}

//---  unsigned型整数xの下位nビットを表示 ---//
void print_nbits(unsigned x, unsigned n){
  int i = int_bits();
  i = (n < i) ? n - 1 : i - 1;
  for ( ; i >= 0; i--) // 
  {
    putchar(((x >> i) & 1U) ? '1' : '0'); // unsignedの最上位ビットと最下位ビット全てに対して、1なら1を返し、0なら0を返す処理
  }
}

// 0 ~ 66535を10進/2進/8進/16進で表示
int main(void){
  for (unsigned i = 0; i <= 65535U; i++){
    printf("%5u ", i);
    print_nbits(i, 16);
    printf(" %06o %04X\n", i, i); // 8進数/16進数
  }
}
#endif
