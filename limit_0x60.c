#if(0)
  #include <stdio.h>
  #include "bit_flag.h"

  int main(void){
    int value = 0;
    int flag = (BIT_FLAG_1 | BIT_FLAG_4); // (0000 0001)or(0000 0100) = (0000 0101)
    bit_extractor(flag, value);
    return 0;
  }

  void bit_extractor(int flag, int value){
    #if(ON)
      if (( flag & BIT_FLAG_1 ) == 0) // (0000 0101)or(0000 0001) = (0000 0001) false
      {
        value = flag & BIT_FLAG_1;
        printf("%x\n", value);
      }
      else if (( flag & BIT_FLAG_2 ) != 0) // (0000 0101)or(0000 0010) = (0000 0000) false
      {
        value = flag & BIT_FLAG_2;
        printf("%x\n", value);
      }
      else if (( flag & BIT_FLAG_4 ) != 0) // (0000 0101)or(0000 0100) = (0000 0100) true
      {
        value = flag & BIT_FLAG_4;
        printf("%x\n", value);
      }
      else if (( flag & BIT_FLAG_8 ) != 0) // (0000 0101)or(0000 1000) = (0000 0000) false
      {
        value = flag & BIT_FLAG_8;
        printf("%x\n", value);
      }
      else {
        puts("正常に処理されませんでした。");
      }
    #endif
  }
#endif

