// ファイルのオープンとクローズ
#include <stdio.h>

#if (1)

int main(void)
{
  FILE* fp;

  fp = fopen("abc.txt", "r");

  if (fp == NULL)
  {
    printf("\aファイルのオープンに失敗しました。\n");
  }
  else
  {
    printf("\aファイルをオープンしました。\n");
    fclose(fp);
  }
  return 0;
}
#endif