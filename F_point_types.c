#include <stdio.h>
#include <string.h>
#include "bit_flag.h"

#if(ON)

#define ARRAY_LEN 100
  typedef struct
  {
    char name[ARRAY_LEN]; // 名前
    int height; // 身長
    int weight; // 体重
  }
  s_Set_char;

/*      名前、身長、体重のデータをポインタで更新する処理      */
void DataInfOP(s_Set_char* func_data)
{
  strcpy(func_data->name, "松井");
  func_data->height = 184;
  func_data->weight = 82;
 }

/*      値を入力すると、名前、身長、体重が表示される処理      */
int main(void){
  s_Set_char func_data;

  strcpy(func_data.name, "米田");
  func_data.height = 173;
  func_data.weight = 75;

  DataInfOP(&func_data);
  int data_count = 3;
  int data_sw = 0;
  for (int i = 0; i < data_count; i++)
  {
  puts("殿方の情報を入力して下さい。"); scanf("%d", &data_sw);
    switch (data_sw)
    {
    case 1:
    printf("%s\n", func_data.name); break;
    case 2:
    printf("%d\n", func_data.height); break;
    case 3:
    printf("%d\n", func_data.weight); break;
    default:
    puts("入力した情報は存在しません");
    }
    data_sw++;
  }
    return 0;
}
#endif
